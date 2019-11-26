#include<iostream.h>
#include<conio.h>
class time
{
	private:
	int hr;
	int min;
	public:
	~time()
	{
		cout<<"Distructor called"<<endl;
	}
	time()
	{
		hr=0;
		min=0;
	}
	time(int h, int m)
	{
		hr=h;
		min=m;
	}
	void input()
	{
		cout<<"Enter hours and minutes: ";
		cin>>hr>>min;
	}

	time add(time t2)
	{
		time t3;
		t3.hr=hr+t2.hr;
		t3.min=min+t2.min;
		if(t3.min>=60)
		{
			 t3.min=t3.min-60;
			 t3.hr++;
		}
		return t3;
	}
	void output()
	{
		cout<<"Added time= ";
		cout<<hr<<"hrs "<<min<<"mins"<<endl;
	}
};
void main()
{
	clrscr();
	time t1, t2, t3;
	time t4(5,40);
	t4.output();
	t1.input();
	t1.output();
	t2.input();
	t2.output();
	t3=t4.add(t1.add(t2));
	t3.output();
	getch();
}



