#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int * p[5];   // array of 5 ptrs
	int * ptr;
	for(int i=0; i<5; i++)
	{
		p[i] = new int[3];  // each ptr points to 3 int
		ptr = p[i];
		//cout<<"Enter the values of the array "<<i<<" :-"<<endl;
		for(int j=0; j<3; j++)
		{
			*ptr = j + 1;
			ptr++;
		}
	}

	for (i = 0; i < 5;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			//cout<<p[i][j]<<"  ";
			cout<<*(*(p+i)+j)<<"  ";
			cout<<((p+i)+j)<<"     ";
		}

		cout<<endl;
	}
	getch();
}
