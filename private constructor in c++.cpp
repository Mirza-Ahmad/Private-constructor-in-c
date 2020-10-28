#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;/*with private constructor*/
class Operation
{
private:
int a,b,n;
Operation(int a=0, int b=1)
{
this->a=a;
this->b=b;
}	
Operation(int a, int b, int n)
{
this->a=a;
this->b=b;
this->n=n;
}
public:	
void showfabinocci()
{
int size,d;
cout<<"Enter the size of the fabinocci series:";
cin>>size;
cout<<a<<" "<<b<<" ";
for(int i=0; i<size; i++)
{
d=a+b;
a=b;
b=d;
cout<<d<<" ";	
}	
}
void showquardatic()
{
double f,k,m;
int y,j,u;
cout<<"Enter a first number:";
cin>>j;
cout<<"Enter a second number:";
cin>>u;
cout<<"Enter a third number:";
cin>>y;
f=u*u-4*j*y;
if(f>0)
{
k=-u+pow(f,0.5)/(2*j);
m=-u-pow(f,0.5)/(2*j);
cout<<"The equation has distict and real roots that are "<<k<<" "<<m;
}
else if(f==0)
{
k=(-u)/(2*j);
cout<<"The equation has real and equal roots are "<<k<<" "<<k;
}
else if(f<0)
{
double r,e,x;
r=-r;
e=sqrt(r);
e=-b/(2*j);
x=e/(2*j);
cout<<"The equation has imaginary roots are "<<e<<"+"<<x<<"i &"<<e<<"-"<<x;
}
}
static Operation* getfabinocci()
{
Operation *p=new Operation;
return p;	
}
static Operation* getquardatic()
{
Operation *h=new Operation;
return h;
}
};
int main(void)
{
first:
Operation *pointer;
int g;
char ch;
cout<<"Press 1: for fabinocci series:";
cout<<"\nPress 2: for quardatic equations roots:"<<endl;
cin>>g;
pointer=Operation::getfabinocci();
pointer=Operation::getquardatic();
if(g==1)
{
pointer->showfabinocci();
}
else if(g==2)
{
pointer->showquardatic();
}
cout<<"\nDo you want to close this program (Y/N):";
cin>>ch;
while(true)
{
if(ch=='y' || ch=='Y')
{
break;	
}
else
{
goto first;
}
}
return 0;
}
