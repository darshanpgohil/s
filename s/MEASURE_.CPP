#include<iostream.h>
#include<conio.h>

class measure
{
	long int meter,feet,inch;
	public:
		void get();

		friend measure operator +(measure m1,measure m2)
		{
			measure m3;

			m3.inch = ((m1.inch + m2.inch) +
				   (m1.meter*39 + m2.meter*39) +
				   (m1.feet*12 + m2.feet*12));

			m3.meter = m3.inch / 39;
			m3.inch %= 39;
			m3.feet = m3.inch / 12;
			m3.inch %= 12;

			return m3;
		}

		void put();
};

void measure::get()
{
	cout<<"\n Enter The Meter : ";
	cin>>meter;

	cout<<"\n Enter The Feet : ";
	cin>>feet;

	cout<<"\n Enter The Inch : ";
	cin>>inch;
}

void measure::put()
{
	cout<<"\n Meter = "<<meter;
	cout<<"\n Feet = "<<feet;
	cout<<"\n Inch = "<<inch;
}

void main()
{
	measure m1,m2;
	clrscr();

	m1.get();
	m2.get();

	measure m3 = m1 + m2;

	m3.put();

	getch();
}