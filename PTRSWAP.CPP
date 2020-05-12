#include<iostream.h>
#include<conio.h>
void swap1(int a, int b)
{
	int s;
	cout<<"value"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl<<endl;
	s=a;
	a=b;
	b=s;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl<<endl;
}
void swap2(int &a, int &b)
{
	int s;
	cout<<"Reference"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl<<endl;
	s=a;
	a=b;
	b=s;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl<<endl;
}
void swap3(int *pa, int *pb)
{
	int s;
	cout<<"Pointer"<<endl;
	cout<<"a= "<<*pa<<endl;
	cout<<"b= "<<*pb<<endl<<endl;
	s=*pa;
	*pa=*pb;
	*pb=s;
	cout<<"a= "<<*pa<<endl;
	cout<<"b= "<<*pb<<endl<<endl;
}
void main()
{
	clrscr();
	int a, b;
	cin>>a>>b;
	swap1(a,b);
	swap2(a,b);
	swap3(&a,&b);
	getch();
}