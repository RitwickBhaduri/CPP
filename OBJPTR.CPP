#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	public:
	char name[15];
	int age;
	int marks;
};
void main()
{
	clrscr();
	Student s1, *ptr;
	ptr=&s1;
	strcpy(ptr->name,"Ritwick");
	ptr->age= 17;
	ptr->marks= 98;
	cout<<ptr->name<<endl;
	cout<<ptr->age<<endl;
	cout<<ptr->marks<<endl;
	getch();
}