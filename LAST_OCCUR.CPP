#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[9]={8, 3, 2, 7, 1, 2, 5, 3, 8};
	for(int i=0; i<9; i++)
	{
		cout<<a[i]<<"  ";
	}
	int n, f;
	cout<<"\nEnter the number to search its positions: ";
	cin>>n;
	for(int j=8; j>=0; j--)
	{
		if(a[j]==n)
		{
			cout<<"The position of the number "<<n<<" is : "<<(j+1);
			f=1;
			break;
		}
	}
	if(f!=1)
	{
		cout<<"Sorry! The array does not contain the number "<<n;
	}
	getch();
}
