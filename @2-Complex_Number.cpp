#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
		real=0;
		img=0;
		}
		complex operator +(complex c2);
		complex operator *(complex c2);
		friend istream& operator >>(istream &in,complex &c);
		friend ostream& operator <<(ostream &out,complex &c);
};
complex complex::operator +(complex c2)
{
	complex c;
	c.real=real+c2.real;
	c.img=img+c2.img;
	return c;
}
istream& operator >>(istream &in,complex &c)
{
	in>>c.real>>c.img;
}
ostream& operator <<(ostream &out,complex &c)
{
	out<<c.real<<"+"<<c.img<<"i";
}
complex complex::operator *(complex c2)
{
	complex c;
	c.real=(real*c2.real)-(img*c2.img);
	c.img=(real*c2.img)+(img*c2.real);
	return c;
}
int main()
{
	complex c1,c2,c3;
	cout<<"\n\tEnter First Complex No: ";
	cin>>c1;
	cout<<"\n\tEnter Second Complex No: ";
	cin>>c2;
	cout<<"\n\t-----------Solution-------------\n";
	cout<<"\n\tFirst Complex No: "<<c1;
	cout<<"\n\tSecond Complex No: "<<c2;
	c3=c1+c2;
	cout<<"\n\n\tAddition: "<<c3;
	c3=c1*c2;
	cout<<"\n\n\tMultiplication: "<<c3<<"\n\n";
	return 0;
}
