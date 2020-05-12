#include<iostream.h>
#include<conio.h>
int prime(int n)
{
int c=0;
		for(int j=1; j<=n; j++)
		{
			if(n%j==0)
			c++;
		}
		if(c==2)
	       {
		return 1;
	}
	else
	{
	return 0;
	}
}
int palin(int i)
{
      int d = 0;
      int num = i;
      int rev = 0;
      while(num > 0)
      {
	 d = num%10;
	 rev = 10*rev + d;
	 num = num/10;
      }
      if(i==rev)
      {
       return 1;
       }
       else
       {
       return 0;
       }
}

void main()
{
	clrscr();
	int a, b, n, m;
	cout<<"Enter The range: ";
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
	 a=prime(i);
	 b=palin(i);

	 if((a==1)&&(b==1))
	 {
	  cout<<i<<endl;
	  }
	  }
	getch();
}

