#include<iostream>
using namespace std;
int main()
{
	int i,*ptr,num[5]={5,75,22,18,90};
	cout<<"The values of array are: "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<num[i]<<" ";
	}
	ptr=num;
	cout<<"\n"<<"Value of ptr: "<<*ptr<<endl;
	ptr++;
	cout<<"Value of ptr++: "<<*ptr<<endl;
	ptr--;
	cout<<"Value of ptr--: "<<*ptr<<endl;
	ptr=ptr+2;
	cout<<"Value of ptr=ptr+2: "<<*ptr<<endl;
	ptr=ptr-1;
	cout<<"Value of ptr=ptr-1: "<<*ptr<<endl;
	ptr+=3;
	cout<<"Value of ptr+=3: "<<*ptr<<endl;
	ptr-=2;
	cout<<"Value of ptr-=2: "<<*ptr<<endl;
return 0;
}
