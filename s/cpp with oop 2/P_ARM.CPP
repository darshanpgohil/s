
#include<iostream.h>
#include<conio.h>
#define size 10

class Number
{
	public:
		void Series(int s,int e)
		{
			int f=1;
			for(int i=s;i<e;i++)
			{
				for(int j=2;j<i;j++)
				{

					if(i%j==0)
					{
						f=0;
						break;
					}
					else
					{
						f=1;
					}
				}
				if(f==1)
			{
				cout<<"\n This Is Prime Number : "<<i<<endl;
			}
			else
			{
				cout<<"\n This Is Not A prime Number : "<<i;
			}
			}
		}

		void Series(int s,int e,int x)
		{
			cout<<"\n Armstrong Number : ";
			int obn,rem=0,sum;

			for(int i=s;i<e;i++)
			{
				obn=i;
				sum=0;
				for(int j=i;j>0;j/=10)
				{
					rem=j%10;
					sum=sum+(rem*rem*rem);
				}
				if(sum==obn)
					cout<<"\t"<<i;
			}

		}
};



void main()
{
	Number Prime,Armstrong;

	int start,end;
	clrscr();



	cout<<"\n Enter Start : ";
	cin>>start;

	cout<<"\n Enter End : ";
	cin>>end;

	Prime.Series(start,end);
	Armstrong.Series(start,end,0);

	getch();
}