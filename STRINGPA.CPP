#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char *a;
	int len, x=0;
	cout<<"Enter  a string: ";
	gets(a);
	len=strlen(a);
	for(int i=0; i<len; i++)
	{
		if(a[i]==a[len-i-1])
		{
			x=x+1;
		}
	}
	if(x==len)
	{
		cout<<"The string is a palindrome";
	}
	else
	{
		cout<<"The string is not a palindrome";
	}
	getch();
}

















