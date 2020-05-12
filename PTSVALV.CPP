#include<iostream.h>
#include<conio.h>
void main()
{
	char *ptr="Yuvraj Singh";
	char *pts=pts;
	int v;
	cout<<ptr;
	while(*ptr!='\0')
	{
		if((*pts=='a')||(*pts=='e')||(*pts=='i')||(*pts=='o')||(*pts=='u'))
		{
			v++;
		}
		pts++;
	}
	cout<<v;
	getch();
}
