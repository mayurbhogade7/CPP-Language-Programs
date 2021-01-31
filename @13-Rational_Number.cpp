#include<iostream>
using namespace std;
class rational 
{
	int num,dem;
	public:
		rational()
		{
			num=0;
			dem=1;
		}
		rational(int a,int b);
		void display();
		rational operator+(rational);
		rational operator-(rational);
		rational operator*(rational);
		rational operator/(rational);
		int operator==(rational);
		int operator>(rational);
		void reduce(rational &);
		
};
rational::rational(int a,int b=1)
{
	if(b>0)
	{
		num=a;
		dem=b;
	}
	else if(b<0)
	{
		cout<<"Negative denominator not allowed.";
		num=0;
		dem=1;
	}
	else
	{
		cout<<"Zero denominator is not allowed.";
		num=0;
		dem=1;
	}
}
void rational::display()
{
	if(dem==1)
	cout<<num<<endl;
	else
	cout<<num<<"/"<<dem<<endl;
}
rational rational::operator+(rational r)
{
	rational r1;
	r1.num=num*r.dem+r.num*dem;
	r1.dem=dem*r.dem;
	reduce (r1);
	return r1;
}
rational rational::operator-(rational r)
{
	rational r1;
	r1.num=num*r.dem-r.num*dem;
	r1.dem=dem*r.dem;
	reduce (r1);
	return r1;
}
rational rational::operator*(rational r)
{
	rational r1;
	r1.num=num*r.dem*r.num*dem;
	r1.dem=dem*r.dem;
	reduce (r1);
	return r1;
}
rational rational::operator/(rational r)
{
	rational r1;
	r1.num=num*r.dem/r.num*dem;
	r1.dem=dem*r.dem;
	reduce (r1);
	return r1;
}
int rational::operator==(rational r)
{
	rational r1;
	if(num==r.num&&dem==r.dem)
	return 1;
	else
	return 0;
}
int rational::operator>(rational r)
{
	rational r1;
	if((num/dem)>(r.num/r.dem))
	return 1;
	else
	return 0;
}
void rational::reduce(rational &r)
{
	int min,i,hcf;
	min=r.num<r.dem?r.num:r.dem;
	for(i=1;i<=min;i++)
	{
		if(r.num%i==0&&r.dem%i==0)
		{
			hcf=i;
		}
	}
	r.num=r.num/hcf;
	r.dem=r.dem/hcf;
}
int main()
{
	char ch;
	int a,b,c;
	rational r1,r2,r3;
	cout<<"Enter first fraction: ";
	cin>>a>>ch>>b;
	r1=rational(a,b);
	cout<<"Enter second fraction: ";
	cin>>a>>ch>>b;
	r2=rational(a,b);
	cout<<"------------------Menu-----------------------\n";
	cout<<"1:Perform Addition.\n2:Perform Substraction.\n3:Perform Multiplication.\n4:Perform Division.\n5:Check Equality.\n6.compare.\n--------------------------------------------\n";
	cout<<"Enter your choice: ";
	cin>>c;
	switch(c)
	{
		case 1: r3=r1+r2;
		cout<<"Addition is: ";
		r3.display();
		break;
		case 2: r3=r1-r2;
		cout<<"Substraction is: ";
		r3.display();
		break;
		case 3: r3=r1*r2;
		cout<<"Multiplication is: ";
		r3.display();
		break;
		case 4: r3=r1/r2;
		cout<<"Division is: ";
		r3.display();
		break;
		case 5: if(r1==r2)
		cout<<"Both are equals.\n";
		else
		cout<<"Not equal.\n";
		break;
		case 6: if(r1>r2)
		{
			cout<<"Greater fractional: ";
			r1.display();
		}
		else
		{
			cout<<"Greater fractional: ";
			r2.display();
		}
		break;
		default : cout<"Wrong choice";
		break;
	}
return 0;
}


