#include<iostream>
#include<cmath>
using namespace std;
class poly
{
	float a,b,c;
	public:
		poly()
		{
			a=0;
			b=0;
			c=0;
		}
		poly(float a,float b,float c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			cout<<"\n";
			cout<<a<<"x^2+"<<b<<"x+"<<c;
		}
		friend ostream& operator <<(ostream & A,poly & B)
		{
			A<<"\n"<<B.a<<"x^2+"<<B.b<<"x+"<<B.c;
			return A;
		}
		friend istream& operator >>(istream &C,poly &D)
		{
			C>>D.a;
			C>>D.b;
			C>>D.c;
			return C;
		}
		poly operator +(poly);
		void eval();
		void soln();
};
poly poly::operator +(poly p)
{
	poly temp;
	temp.a=a+p.a;
	temp.b=b+p.b;
	temp.c=c+p.c;
	return temp;
}
void poly::eval()
{
	int x;
	cout<<"Enter The Value of X: ";
	cin>>x;
	float ans;
	ans=a*x*x+b*x+c;
	cout<<"Evaluated Answer is: "<<ans;
}
void poly::soln()
{
	float x1,x2;
	x1=(-b+(std::sqrt(b*b)-(4*a*c)))/2*a;
	x2=(-b-(std::sqrt(b*b)-(4*a*c)))/2*a;
	cout<<"\nThe two Solution of given polynomial equation is:"<<x1<<"   "<<x2;
}
int main()
{
	int ch;
	char choice;
	poly p1,p2,p3;
	do 
	{
		cout<<"\n*********MENU********\n"<<"1.Create Poly\n"<<"2.Accept\n"<<"3.Display\n"<<"4.Add\n"<<"Evaluate\n"<<"6.Solution\n"<<"Enter Your Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\nThe polynomial After initialization: ";
			       cout<<"\nP1= "<<p1;
			       cout<<"\nP2= "<<p2;
			       break;
			case 2:cout<<"\nEnter values (a,b,c) of First polynomial : ";
			       cin>>p1;
			       cout<<"\nEnter Second Polynomial :";
			       cin>>p2;
			       break;
	        case 3:cout<<"\nFirst Polynomial: ";
	               cout<<p1;
	               cout<<"\nSecond Polynomial: ";
	               cout<<p2;
	               break;
	        case 4:p3=p1+p2;
	               cout<<"\nAddition of two polynomials: "<<p3;
	               break;
	        case 5:p1.eval();
	               break;
	        case 6:p1.soln();
	               break;
	        default :cout<<"\nTnvalid Choice!!!";
		}
		cout<<"\nDo you want to continue? :";
		cin>>choice;
	}while(choice=='y');
	return 0;
}

