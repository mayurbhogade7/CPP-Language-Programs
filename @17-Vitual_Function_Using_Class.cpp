#include<iostream>
using namespace std;
class base
{
	public:
		void display()
		{
			cout<<"Display base"<<endl;
		}
		void show()
		{
			cout<<"Show base"<<endl;
		}
};
class derived:public base
{
	public:
		void display()
		{
			cout<<"\nDisplay derived"<<endl;
		}
		virtual void show()
		{
			cout<<"Show derived"<<endl;
		}
};
int main()
{
	base B;
	derived D;
	base *bptr;
	cout<<"bptr points to base class"<<endl;
	bptr=&B;
	bptr->display();
	bptr->show();
	cout<<"\nbptr points to derived class"<<endl;
	bptr=&D;
	bptr->display();
	bptr->show();
	return 0;
}
