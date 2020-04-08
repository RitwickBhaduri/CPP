#include<iostream.h>

#include<fstream.h>
#include<conio.h>
void main()
{
	clrscr();
	ofstream fout;
	fout.open("text.txt", ios::out);
	char x[30]={"Hello! I am Ritwick."};
	fout<<x<<endl;
	fout.close();
	ifstream fin;
	fin.open("text.txt", ios::in);
	char y[30];
		fin>>y;
		cout<<y<<endl;

	fin.close();
	getch();
}
