#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int *ptr = new int[8];
	int *pts = ptr;
	cout<<sizeof(*ptr)<<endl<<endl;
	cout<<"Enter the values of the array"<<endl;
	for(int i=1; i<=8; i++)
	{
		cout<<"Enter the value "<<i<<" of the array :     ";
		cin>>*ptr;
		cout<<endl<<endl;
		ptr++;
	}
	for(i=1; i<=8; i++)
	{
		cout<<"The value of the array "<<i<<" is:     "<<
		cout<<*pts<<endl;
		cout<<"The address of the array "<<i<<" is:     ";
		cout<<
		pts<<endl<<endl;
		pts++;
		ptr++;
	}
	getch();
}