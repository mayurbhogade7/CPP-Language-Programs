#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("country.txt");
    fout<<"United State of America \n";
    fout<<"United Kingdom \n";
    fout<<"South Korea ";
    fout.close();
    fout.open("capital.txt");
    fout<<"washington \n"<<"London \n"<<"Seoul \n";
    fout.close();
    const int n=80;
    char line[n];
    ifstream fin;
    fin.open("country.txt");
    cout<<"\nContents of file\n";
    while(fin)
    {
    	fin.getline(line,n);
    	cout<<line;
	}
	fin.close();
	fin.open("capital.txt");
	while(fin)
	{
		fin.getline(line,n);
		cout<<line;
	}
	fin.close();
	return 0;
}

