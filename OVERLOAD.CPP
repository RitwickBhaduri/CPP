#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
int vol(int l, int b, int h)
{
	int v;
	v=l*b*h;
	return v;
}
float vol(float r)
{
	float v;
	v=(4.0/3.0)*(3.14)*(pow(r,3));
	return v;
}
int vol(int x)
{
	int v;
	v=pow(x,3);
	return v;
}
int vol()
{
	return 100;
}
void main()
{
	clrscr();
	int l, b, h, x, a;
	float r;
	char c[20];
	cout<<"Enter the shape or box (magic box): ";
	gets(c);
	if(strcmp(c, "cuboid")==0)
	{
		cout<<"Enter the values for l, b and h: ";
		cin>>l>>b>>h;
		int vol1=vol(l, b, h);
		cout<<"The volume of the cuboid is: "<<vol1;
	}
	else if(strcmp(c, "sphere")==0)
	{
		cout<<"Enter the value of r: ";
		cin>>r;
		float vol2=vol(r);
		cout<<"The volume of the sphere is: "<<vol2;
	}
	else if(strcmp(c, "cube")==0)
	{
		cout<<"Enter the value of x: ";
		cin>>x;
		int vol3=vol(x);
		cout<<"The value of the cube is: "<<vol3;
	}
	else if(strcmp(c, "box")==0)
	{
		cout<<"You choose the magic box"<<endl;
		int vol4=vol();
		cout<<"The volume of magic box is: "<<vol4;
	}
	else
	{
		cout<<"Wrong input of shape";
	}
	getch();
}