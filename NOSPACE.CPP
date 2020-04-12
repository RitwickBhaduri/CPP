#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[100];
	int len=0, c=0;
	cout<<"Enter a string: ";
	gets(a);
	len=strlen(a);
	for(int i=0; i<len; i++)
	{
	       if(a[i]==' ')
	       {
	       c++;
	       }
	}
	cout<<"Number of space= "<<c<<endl;
	getch();
}
