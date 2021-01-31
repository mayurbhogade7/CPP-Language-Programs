#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a,b;
	char arr[10];
	cout<<"\nEnter the value of a & b \n";
	cin>>a>>b;
	cout<<"Enter Name\n";
	cin>>arr;
	ofstream outfile("File.txt");
	if(outfile.is_open())
	{
		outfile<<a<<endl;
		outfile<<b<<endl;
		outfile<<arr<<endl;
	}
	else
	cout<<"File is not found";
	outfile.close();
	ifstream infile("File.txt");
	if(infile.is_open())
	{
		infile>>a;
		infile>>b;
		infile>>arr;
		cout<<"Value of a & b are \n";
		cout<<a<<"  "<<b;
		cout<<"\nName is: \n";
		cout<<arr<<endl;
		cout<<"\nEnd of file";
	}
	infile.close();
	return 0;
}
