#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>
struct stud
{
	int rollno;
	char name[20];
	float marks;
}s;
void input(stud &s)
{
	cin>>s.rollno;
	gets(s.name);
	cin>>s.marks;
}
void main()
{
	clrscr();
	int n;
	ofstream fout;
	fout.open("student.txt",ios::out | ios::binary);
	cout<<"Enter no. of students: ";
	cin>>n;
	cout<<"Enter rollno, name and marks: ";
	for(int i=0; i<n; i++)
	{
		input(s);
		fout.write((char*)&s,sizeof(s));
	}
	fout.close();
	ifstream fin;
	fin.open("student.txt",ios::in | ios::binary);
	cout<<endl<<endl<<"Your result is: "<<endl<<endl;
	for( i=0; i<n; i++)
	{
		cout<<endl;
		fin.read((char*)&s,sizeof(s));
		cout<<"Roll number: "<<s.rollno<<endl;
		cout<<"Name: "<<s.name<<endl;
		cout<<"Marks: "<<s.marks<<endl;
	}
	getch();
	}





