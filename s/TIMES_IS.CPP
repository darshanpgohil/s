#include<iostream.h>
#include<conio.h>

class Time
{
	int hour,minut,second;
	public:
		Time()
		{
			cout<<"\n Enter The Hour : ";
			cin>>hour;

			cout<<"\n Enter The Minute : ";
			cin>>minut;

			cout<<"\n Enter The Second : ";
			cin>>second;
		}

		void operator +(Time T)
		{
			hour=hour+T.hour;
			minut=minut+T.minut;
			second=second+T.second;
		}

		void display()
		{
			cout<<"\n Hour + Minut + Second ";
			cout<<"\n"<<hour<<":"<<minut<<":"<<second<<"\n";
		}
};

void main()
{
	clrscr();

	cout<<"\n Enter The 1st Time : \n";
	Time t1;

	cout<<"\n Enter The Second Time : \n";
	Time t2;

	t1+t2;

	t1.display();

	getch();
}

