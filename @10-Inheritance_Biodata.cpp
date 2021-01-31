#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class personal
{
	protected:
		string name;
		int d,m,y;
	public:
	    void get_per()
	    	{
	        	cout<<"Enter your name: ";
		    	cin.ignore();
				getline(cin,name);
				cout<<"Enter your DOB(dd mm yyyy): ";
				cin>>d>>m>>y;
	 		}	
		
};
class professional
{
	protected:
		string comp_name;
		float year;
	public:
		void get_prof()
			{
				cout<<"Enter your company name: ";
				cin.ignore();
				getline(cin,comp_name);
				cout<<"Enter years of Experience: ";
				cin>>year;
			}
};
class academic
{
	protected:
		string uni;
		float sgpa;
	public:
		void get_acd()
			{
				cout<<"Enter your University name: ";
				cin.ignore();
				getline(cin,uni);
				cout<<"Enter your SGPA: ";
				cin>>sgpa;
			}
};
class bio_data:public personal,public professional,public academic
{
	public:
		void display()
			{
				cout<<"\t1.Name: "<<name<<"\n\t2.Date of Birth: "<<d<<"/"<<m<<"/"<<y<<"\n\t3.Studied University: "<<uni<<"\n\t4.SGPA earned: "<<setprecision(2)<<fixed<<sgpa<<"\n\t6.Working Experience: "<<setprecision(2)<<fixed<<year;
			}
};
int main()
{
	int i,n;
	bio_data b[10];
	cout<<"Enter total number of employee: ";
	cin>>n;
	cout<<"Enter the data to complete the database: \n";
	for(i=0;i<n;i++)
		{
			cout<<"For entry no "<<i+1<<":\n";
			b[i].get_per();
			b[i].get_acd();
			b[i].get_prof();
		}
	cout<<"--------------------------DATABASE-------------------------------\n";
	for(i=0;i<n;i++)
		{
			cout<<"For candicate no"<<i+1<<": ";
			cout<<"\n\t------------BIO DATA-------------\n";
			b[i].display();
			cout<<"\n\t---------------------------------------------------------------\n";
		}	
return 0;
}

