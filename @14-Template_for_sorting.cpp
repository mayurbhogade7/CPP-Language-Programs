#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>
class array
{
	T a[5],temp;
	int i,j,n;
	public:
		void getdata()
		{
			cout<<"\nEnter the Size of Array:\n";
			cin>>n;
			cout<<"Enter the elements:\n";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void sort()
		{
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}				
			    }
			}
		}
		void display()
		{
			cout<<"\nSorted array elements:\n";
			for(i=0;i<n;i++)
			{
				cout<<"  "<<a[i];
			}
		}
};
int main()
{
	array<int>obj1;
	array<float>obj2;
	int ch;
	char choice;
	do
	{
		cout<<"\n***********MENU***********\n1.Integer type of elements sorted\n2.Float type of elements sorted";
		cout<<"\nEnter your choice: \n";
		cin>>ch;
		switch(ch)
		{
			case 1:obj1.getdata();
			       obj1.sort();
			       obj1.display();
			       break;
			case 2:obj2.getdata();
			       obj2.sort();
			       obj2.display();
			       break;
		}
		cout<<"\n\nDo you want to continue: ";
		cin>>choice;
	}
	while(choice=='y');
	return 0;
}
