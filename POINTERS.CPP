#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a =10;
	int b =20;
	int * pts;
	int * ptr;
	ptr= &a;
	pts= &b;
	cout<<ptr<<endl;
	cout<<* ptr<<endl;
	cout<<pts<<endl;
	cout<<* pts<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(pts)<<endl;
	char c='r';
	char * pchar=&c;
	float * pfloat= NULL;
	cout<<sizeof(pchar)<<endl;
	cout<<sizeof(pfloat)<<endl;
	cout<<pchar<<endl;
	cout<<pfloat<<endl;
	getch();
}