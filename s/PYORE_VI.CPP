#include<iostream.h>
#include<conio.h>

class base
{
	public:
	      virtual void show()=0;
};

class derived_class:public base
{
	public:
	      void show()
	      {
		cout<<"\n Derived Class ";
	      }
};

void main()
{
	base *ptr;
	derived_class d;
	ptr=&d;
	ptr->show();

	getch();
}