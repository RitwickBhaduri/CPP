#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[6]={6, 3, 4, 2, 1, 5}, i, j, temp=0;
	for(i=0; i<6; i++)
	{
		cout<<a[i]<<"  ";
	}
	int n=6;

	for(i=0; i<n/2; i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	cout<<endl;
	for(i=0; i<6; i++)
	{
		cout<<a[i]<<"  ";
	}
	getch();
}
