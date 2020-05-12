#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=10, b=20, c=30;
	int * ptr = &a;
	cout<<ptr<<endl<<*ptr<<endl;
	ptr--;
	cout<<ptr<<endl<<*ptr<<endl;
	ptr--;
	cout<<ptr<<endl<<*ptr<<endl;
	ptr--;
	cout<<ptr<<endl<<*ptr<<endl;
	getch();
}



