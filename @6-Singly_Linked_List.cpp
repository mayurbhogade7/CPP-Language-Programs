#include<iostream>
#include<list>
using namespace std;
class stlist
{
	list<int>mylist,mylist2;
	list<int>::iterator it;
	public:
		void checkempty();
		void insertele();
		void makelist();
		void mergerlist();
		void reverselist();
		void sortlist();
		void uniquelist();
		void display();
};
void stlist::checkempty()
{
	if(mylist.empty())
	cout<<"\nList is empty";
	else
	cout<<"\nList is not empty"<<endl;
}
void stlist::makelist()
{
	int count;
	int a;
	cout<<"\nEnter the number of elements in your list"<<endl;
	cin>>count;
	cout<<"\nEnter the elements: "<<endl;
	for(int i=0;i<count;i++)
	{
		cin>>a;
		mylist.push_back(a);
	}
}
void stlist::insertele()
{
	int pos,num;
	cout<<"\nEnter the position at which you want to enter elements: "<<endl;
	cin>>pos;
	cout<<"Enter the elements you want to to enter: "<<endl;
	cin>>num;
	it=mylist.begin();
	for(int i=0;i<pos;i++)
	++it;
	mylist.insert(it,num);
}
void stlist::display()
{
	cout<<"\nList:"<<endl;
	for(it=mylist.begin();it!=mylist.end();it++)
	cout<<*it<<endl;
}
void stlist::sortlist()
{
	cout<<"\nSorted list:"<<endl;
	mylist.sort();
}
void stlist::reverselist()
{
	cout<<"\nReversed list: "<<endl;
	mylist.reverse();
}
void stlist::uniquelist()
{
	mylist.unique();
}
void stlist::mergerlist()
{
	int count;
	int a;
	cout<<"\nEnter the number of elements in your second list"<<endl;
	cin>>count;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<count;i++)
	{
		cin>>a;
		mylist2.push_back(a);
	}
	mylist.merge(mylist2);
}
int main()
{
	stlist obj;
	int choice;
	char c='y';
	do
	{
		cout<<"\n1.Enter elements of list\n2.Check if list is empty\n3.Insert element in list\n4.Sort list\n5.Print list in reverse order\n6.Delete repeated elements in list\n7.Merge 2 lists\nEnter your choice: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.makelist();
				break;
			case 2:
				obj.checkempty();
				break;
			case 3:
				obj.insertele();
				obj.display();
				break;
				
			case 4:
				obj.sortlist();
				obj.display();
				break;
			case 5:
				obj.reverselist();
				obj.display();
				break;
			case 6:
				obj.uniquelist();
				obj.display();
				break;
			case 7:
				obj.mergerlist();
				obj.display();
				break;
			default :
				cout<<"\nWrong Choice"<<endl;
		}
		cout<<"Do you wish to continue? (Y|N): ";
		cin>>c;
	}while(c=='y'||c=='Y');
	return 0;
}
