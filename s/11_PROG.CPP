#include<iostream.h>
#include<conio.h>
#include<string.h>

class media
{
	public:
	float price;
	char title[50];
		media()
		{
			price=1000;
			strcpy(title,"Game Of Throns");
		}
		virtual void display()=0;
};

class book:public media
{
	int pages;
	public:
		book()
		{
			pages=100;
		}
		void display()
		{
			cout<<"\n Price : "<<price;
			cout<<"\n Title : "<<title;
			cout<<"\nPages : "<<pages;
		}
};

class tape:public media
{
	float time;
	public:
		tape()
		{
			time=2.00;
		}
		void display()
		{
			cout<<"\n Price : "<<price;
			cout<<"\n Title : "<<title;
			cout<<"\n Time : "<<time;
		}
};

void main()
{
	media *ptr;
	book b;
	tape t;
	clrscr();
	ptr=&b;
	ptr->display();
	ptr=&t;
	ptr->display();

	getch();
}