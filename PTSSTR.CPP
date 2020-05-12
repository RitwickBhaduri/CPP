#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char *name="Ritwick";
	char *cp;
	for(cp=name; *cp!='\0'; cp++)
	{
		cout<<*cp;
	}
	getch();
}
