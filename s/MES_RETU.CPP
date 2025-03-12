#include<iostream.h>
#include<conio.h>

class measure
{
	int feet,inches;
	public:
		void get();
		friend long int operator +(measure m1,measure m2)
		{
			long int i;

			i = (((m1.feet*12)+(m1.inches))+((m2.feet*12) + (m2.inches)));

			return i;
		}

};

void measure :: get()
{
	cout<<"\n Enter The Feet : ";
	cin>>feet;

	cout<<"\n Enter The Inches : ";
	cin>>inches;
}

void main()
{
	measure m1,m2;
	long int res;
	clrscr();

	m1.get();
	m2.get();

	res = m1 + m2;

	cout<<" Res : "<<res;

	getch();
}