#include<iostream>
using namespace std;
class convert
{
	protected:
		float val1,val2;
	public:
		void getinit()
		{
			cin>>val1;
		}
		void getconv()
		{
			cout<<val2;
		}
		virtual void compute()=0;
};
class meter_cm:public convert
{
	public:
		void compute()
		{
		   cout<<"Enter value in meter: ";
		   getinit();
		   val2=val1*100;
		   cout<<"Value in cm: ";
		   getconv();
		   cout<<"cm"<<endl;
		}
};
class temp:public convert
{
	public:
		void compute()
		{
			cout<<"Enter value in celcious: ";
			getinit();
			val2=(val1*1.8)+32;
			cout<<"Temperature in Fahrenhit: ";
			getconv();
			cout<<"F"<<endl;
		}
};
class speed:public convert
{
	public:
		void compute()
		{
			cout<<"Enter speed in kmph: ";
			getinit();
			val2=(val1*5)/18;
			cout<<"Speed in m/s: ";
			getconv();
			cout<<"m/s"<<endl;
		}
};
int main()
{
	int ch;
	convert *p;
	meter_cm m1;
	temp t;
	speed s;
	char yes;
	do
	{
	cout<<"-------------------MENU----------------------\n";
	cout<<"1.Meter to centimeters.\n2.Celcious to Fahrenheit.\n3.Kmph to m/s.\n--------------------------------------------\n";
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:p=&m1;
			   p->compute();
			   break;
		case 2:p=&t;
		       p->compute();
		       break;
		case 3:p=&s;
			   p->compute();
			   break;
		default:cout<<"Wrong Choice.";
	}
	cout<<"Do you want to continue: ";
	cin>>yes;
    }
    while(yes=='y'||yes=='Y');
return 0;	
}
