#include<iostream.h>
#include<conio.h>

class measure
{
	int feet,inches;
	public:
		void get();

		friend long int operator +(measure m1,measure m2)
		{
			long int f;

			f = (((m1.feet) +  (m1.inches / m1.inches)) + ((m2.feet) + (m2.inches / m2.inches)));

			return f;
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

	cout<<"\n Res = "<<res;

	getch();
}