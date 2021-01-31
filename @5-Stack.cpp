#include<iostream>
#include<list>
using namespace std;
class stack
{
	list<int>l;
	list<int>::iterator itr;
	public:
		void display();
		void push();
		void pop();
};
void stack::display()
{
	for(itr=l.begin();itr!=l.end();itr++)
	cout<<*itr<<endl;
}
void stack::push()
{
   int num;
   cout<<"\nEnter the elements to add in stack: ";
   cin>>num;
   l.push_back(num);	
}
void stack::pop()
{
	int num;
	itr=l.end();
	itr--;
	num=*itr;
	l.pop_back();
	cout<<"\nElements popped out is: "<<num;
}
int main()
{
	stack s;
	char c,c1;
	int ch;
	do
	{
		cout<<"\nMENU\n"<<"1.Add Element\n2.Delete Element\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				do
				{
					s.push();
					cout<<"\nDo you want to add another elements(Y|N)?\n";
					cin>>c1;
				}while(c1=='y');
				cout<<"\nStack:";
				s.display();
				break;
			case 2:
				s.pop();
				cout<<"\nStack:";
				s.display();
				break;
			default :cout<<"\nWrong Choice";
		}
		cout<<"\nDo you want to continue(Y|N)?\n";
		cin>>c;
	}while(c=='y');
	return 0;
}
