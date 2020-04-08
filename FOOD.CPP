#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class RESTRA
{
	private:
	int FoodCode;
	char Food[30];
	char Ftype[20];
	char Sticker[15];
	void GetSticker()
	{
		if(strcmp(Ftype, "Vegetarian")==0)
		{
		      strcpy(Sticker,"green");
		}
		else if(strcmp(Ftype,"Contains Egg")==0)
		{
			 strcpy(Sticker,"yellow");
		}
		else if(strcmp(Ftype, "Non Vegetarian")==0)
		{
			 strcpy(Sticker,"red");
		}

	}
	public:
	void GetFood()
	{
		cout<<"Enter the FoodCode: ";
		cin>>FoodCode;
		cout<<"Enter the Food: ";
		gets(Food);
		cout<<"Enter the Ftype: ";
		gets(Ftype);
		GetSticker();
	}
	void ShowFood()
	{
		cout<<"The data members of the food"<<endl;
		cout<<FoodCode<<endl;
		cout<<Food<<endl;
		cout<<Ftype<<endl;
		cout<<Sticker;

	}
};
void main()
{
	clrscr();
	RESTRA r;

       r.GetFood() ;
       r.ShowFood();
	getch();
}


