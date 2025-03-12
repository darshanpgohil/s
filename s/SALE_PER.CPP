/* create a cpp pro that contain class suplay,

it has city,total_sale,and sales person as data members

now create two classes ahmedabad and jamnagar which inherit class suplay

now calculate and display sales person requirement is perticuler city according to
the following condition

1.two sales person can only sale upto 20000.

2.morethan 20000 sales apoint new sale person.

3.if sales is lessthan 5000 no new apoinment of sale person.
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


class supply
{
	public:
		char city[50];
		long int total_sales,sales_person;

		supply()
		{
			total_sales=20000;
			sales_person=2;
		}
		virtual void calculate()=0;
		virtual void display()=0;

};

class ahmedabad : public supply
{
	public:
		ahmedabad()
		{
			strcpy(city,"Ahmedabad");
		}

		void calculate()
		{
			long int sales;
			cout<<"\n How Much Sales Are There : ";
			cin>>sales;

			if(sales<5000)
			{
				sales_person+=0;
			}
			else if(sales>20000)
			{
				//sales_person=sales_person+floor(sales/10000);
				sales_person++;
			}

			total_sales+=sales;
		}

		void display()
		{
			cout<<"\nCity = "<<city;
			cout<<"\n Sales Person "<<sales_person;
			cout<<"\n Sales = "<<total_sales;
		}

};

class jamnagar : public supply
{
	public:
		jamnagar()
		{
			strcpy(city,"Jamnagar");
		}

		void calculate()
		{
			long int sales;

			cout<<"\n How Many Sales : ";
			cin>>sales;

			if(sales<5000)
				sales_person+=0;
			else if(sales>20000)
				sales_person++;

			total_sales+=sales;
		}

		void display()
		{
			cout<<"\n City = "<<city;
			cout<<"\n Total Sales Person = "<<sales_person;
			cout<<"\n Total Sales = "<<total_sales;
		}
};

void main()
{
	supply *s;

	int ch;

	clrscr();


	do
	{
	cout<<"\n 1.Ahmedabad \n 2.Jamnagar\n";

	cout<<"\n Enter Your Choice : ";
	cin>>ch;


	switch(ch)
	{
		case 1 : ahmedabad a;
			 s=&a;
			 s->calculate();
			 s->display();
			 break;

		case 2 : jamnagar j;
			 s=&j;
			 s->calculate();
			 s->display();
			 break;

		case 3 : exit(0);
			 break;

		default : cout<<"\n Wrong Choice !!!!!" ;
			 break;
	}
	}while(ch!=3);

	getch();
}