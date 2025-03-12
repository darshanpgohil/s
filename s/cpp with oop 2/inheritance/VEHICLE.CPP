//Assignment Program-8

#include<iostream.h>
#include<conio.h>
#include<string.h>

class vehicle
{
	public:
	char *color;
	int v_no;

	vehicle()
	{
		cout<<"\n Enter The Color : ";
		cin>>color;

		cout<<"\n Enter The Vehicle No : ";
		cin>>v_no;
	}
};

class scooter : virtual public vehicle
{
	public:
		char *type;
		long int price;


		scooter()
		{
			char ch;

			do
			{
				cout<<"\n 1. Bike \t 2. Moped \n";

				cout<<"\n Enter Your Choice : ";
				cin>>ch;

				switch(ch)
				{
					case '1' : strcpy(type,"Bike");
						   break;

					case '2' : strcpy(type,"Moped");
						   break;

					default : cout<<"\n Wrong Choice : ";
						  break;
				}

			}while(ch>'2');

			cout<<"\n Price : ";
			cin>>price;
		}

};

class bill : virtual public vehicle
{
	public:
	      float discound,tax;

	      bill()
	      {
		discound=(7/100.0);
		tax=(4/100.0);
	      }
};

class payment : public scooter,public bill
{
	public:
		long float a_discound,total;

	void process()
	{
		if(strcmp(type,"Bike")==0)
		{
			a_discound=(price*3)/100.0;
		}
		else if(strcmp(type,"Moped")==0)
		{
			a_discound=(price*2)/100.0;
		}

		discound=price*discound;
		tax=price*tax;

		total=price-discound-a_discound*tax;
	}

	void display()
	{
		cout<<"\n Color Of Vehicle : "<<color;
		cout<<"\n Name Of Vehicle : "<<v_no;
		cout<<"\n Bike Type : "<<type;
		cout<<"\n Bike Price : "<<price;
		cout<<"\n Discound : "<<discound;
		cout<<"\n Tax : "<<tax;
		cout<<"\n Additional Discound : "<<a_discound;
		cout<<"\n total : "<<total;
	}
};


void main()
{
	payment p;

	p.process();
	p.display();

	getch();
}
