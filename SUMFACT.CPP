#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int n, b=0;
	cout<<"Enter a number: ";
	cin>>n;
	for(int i=1; i<=(n-1); i++)
	{
		if(n%i==0)
		{
			b=b+i;
		}
	}
	cout<<"The sum is: "<<b;
	getch();
}


