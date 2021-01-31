#include<iostream>
#include<string.h>
using namespace std;
class ABC
{
	int income,age;
	char car;
	string city;
	public:
		void getdata()
		{
			cout<<"\n\tEnter Person Age: ";
			cin>>age;
			cout<<"\n\tEnter Person Income: ";
			cin>>income;
			cout<<"\n\tEnter City Where Person Staying: ";
			cin>>city;
			cout<<"\n\tPerson Holds Car or Not: ";
			cin>>car;
		}
		void display()
		{
			try
			{
				if(age<18||age>55)
				throw(age);
				else
				cout<<"Age is between 18-55\n";
			}
			catch(int age)
			{
				cout<<"Invalid Age\n";
			}
			try
			{
				if(income<50000||income>100000)
				throw(income);
				else
				cout<<"Income is between 50k-100k\n";
			}
			catch(int income)
			{
				cout<<"Invalid Income\n";
			}
			try
			{
				if(city!="pune"||city!="mumbai"||city!="banglore"||city!="chennai")
				throw(city);
				else
				cout<<"Person Staying in city: Pune,Mumnai,Banglore,Chennai:\n";
			}
			catch(string city)
			{
				cout<<"Invalid City\n";
			}
			try
			{
				if(car=='N'||car=='n')
				throw(car);
				else
				cout<<"Person Holds Car\n";
			}
			catch(char car)
			{
				cout<<"Person Not Holds Car\n";
			}
		}
 } ;
 int main()
 {
 	ABC p;
 	cout<<"\n**********Enter the Data of Person**************\n";
 	p.getdata();
 	p.display();
 	return 0;
 }
