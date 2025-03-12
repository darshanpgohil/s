//area of shape

#include<iostream.h>
#include<conio.h>

class shape
{
	public:
		void area(float half,int b,int h)
		{
			cout<<"\n Area Of Triangle Is : "<<half*b*h;
		}
		void area(float r)
		{
			cout<<"\n Area Of Circle : "<<3.14*r*r;
		}
		void area(int l,int b)
		{
			cout<<"\n Area Of Rectangle : "<<l*b;
		}
};

void main()
{
	shape triangle,circle,rectangle;
	clrscr();

	triangle.area(0.5,10,5);
	circle.area(5);
	rectangle.area(10,5);

	getch();
}