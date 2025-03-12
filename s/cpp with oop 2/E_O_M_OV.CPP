//odd even series

#include<iostream.h>
#include<conio.h>

class Number
{
	public:
		void Series(int s,int e)
		{
			for(int i=s;i<e;i++)
			{
				if(i%2!=0)
					cout<<i<<"\t";
			}
			cout<<"\n";
		}

		void Series(int s,int e,int x)
		{
			for(int i=s;i<e;i++)
			{
				if(i%2==0)
					cout<<i<<"\t";
			}
			cout<<"\n";
		}
};

void main()
{
	Number Odd,Even;

	int start,end;

	cout<<"\n Enter The Start Number : ";
	cin>>start;

	cout<<"\n Enter The End Number : ";
	cin>>end;

	cout<<"\n Odd Numbers \n";
	Odd.Series(start,end);
	cout<<"\n Even Numbers \n";
	Even.Series(start,end,0);

	getch();
}