#include<iostream>
#include<list>
using namespace std;
class queue
{
	list<int>l;
	list<int>::iterator itr;
	public:
		void display();
		void add();
		void remove();
};
void queue::display()
{
	for(itr=l.begin();itr!=l.end();itr++)
	cout<<*itr<<endl;
}
void queue::add()
{
   int num;
   cout<<"\nEnter the elements to add in Queue: ";
   cin>>num;
   l.push_back(num);	
}
void queue::remove()
{
	int num;
	itr=l.begin();
	num=*itr;
	l.pop_front();
	cout<<"\nElements popped out is: "<<num<<endl;
}
int main()
{
	queue q;
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
					q.add();
					cout<<"\nDo you want to add another elements(Y|N)?\n";
					cin>>c1;
				}while(c1=='y');
				cout<<"\nQueue:";
				q.display();
				break;
			case 2:
				q.remove();
				cout<<"\nQueue:";
				q.display();
				break;
			default :cout<<"\nWrong Choice";
		}
		cout<<"\nDo you want to continue(Y|N)?\n";
		cin>>c;
	}while(c=='y');
	return 0;
}
