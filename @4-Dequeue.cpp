#include<iostream>
#include<list>
using namespace std;
class dequeue
{
	list<int>l;
	list<int>::iterator itr;
	public:
		void display();
		void add_at_beg();
		void add_at_end();
		void remove_start();
		void remove_end();
};
void dequeue::display()
{
	for(itr=l.begin();itr!=l.end();itr++)
	cout<<*itr<<endl;
}
void dequeue::add_at_end()
{
   int num;
   cout<<"\nEnter the elements to add in Dequeue: ";
   cin>>num;
   l.push_back(num);	
}
void dequeue::add_at_beg()
{
   int num;
   cout<<"\nEnter the elements to add in Dequeue: ";
   cin>>num;
   l.push_front(num);	
}
void dequeue::remove_start()
{
	int num;
	itr=l.begin();
	num=*itr;
	l.pop_front();
	cout<<"\nElements popped out is: "<<num<<endl;
}
void dequeue::remove_end()
{
	int num;
	itr=l.end();
	itr--;
	num=*itr;
	l.pop_back();
	cout<<"\nElements popped out is: "<<num<<endl;
}
int main()
{
	dequeue q;
	char c,c1;
	int ch;
	cout<<"\nFor Dequeue:\n\t\t";
	do
	{
		q.add_at_end();
		cout<<"\nAny more elements(Y|N): ";
		cin>>c;
    }while(c=='y');
    cout<<"\nDequeue:n";
    q.display();
    do
    {
		cout<<"\n**********MENU***********\n"<<"1.Add Element from start\n2.Add Elements from end\n3.Delete Element from start\n4.Delete Element from end\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
					q.add_at_beg();
			        cout<<"Queue :\n";
			        q.display();
			        break;
			case 2:
				    q.add_at_end();
				    cout<<"Queue :\n";
			        q.display();
			        break;
			case 3:
				    q.remove_start();
				    cout<<"Queue :\n";
			        q.display();
			        break;
			case 4:
				    q.remove_end();
				    cout<<"Queue :\n";
			        q.display();
			        break;
			default :cout<<"\nWrong Choice";
		}
		cout<<"\nDo you want to continue(Y|N)?\n";
		cin>>c;
	}while(c=='y');
	return 0;
}
