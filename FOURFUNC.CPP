#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
double a=0,b=0,r=0;
char ch;
cout<<"Enter the two numbers: ";
cin>>a>>b;
cout<<"Enter the operator: ";
cin>>ch;
if(ch=='+')
{
r=a+b;
cout<<a<<" + "<<b<<" = "<<r;
}
else if(ch=='-')
{
r=a-b;
cout<<a<<" - "<<b<<" = "<<r;
}
else if(ch=='*')
{
r=a*b;
cout<<a<<" x "<<b<<" = "<<r;
}
else if(ch=='/')
{
r=a/b;
cout<<a<<" / "<<b<<" = "<<r;
}
else
{
cout<<"Wrong Input!!";
}
getch();
}