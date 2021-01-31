#include<iostream>
using namespace std;
class calculator
{float num1,num2,ans;
char op;
public:
	void getdata();
	void display();
	void cal();
};
void calculator::getdata()
{cout<<"Enter the num1,operator and num2: ";
cin>>num1>>op>>num2;
}
void calculator::display()
{cout<<"your result is:"<<num1<<op<<num2<<"="<<ans<<endl;
}
void calculator::cal()
{switch(op)
{case '+':ans=num1+num2;
display();
break;
case '-':ans=num1-num2;
display();
break;
case '*':ans=num1*num2;
display();
break;
case '/':if(num2!=0)
{ans=num1/num2;
display();
}else
cout<<"\nDenominator should not be zero";
}
}
int main()
{char ch;
calculator c;
do{
c.getdata();
c.cal();
cout<<"\nDo you want to continue (y|n): ";
cin>>ch;
}while(ch=='y'||ch=='Y');
return 0;
}
