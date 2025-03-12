
/*14 Create Class Shape , create objects of shape such as square,triangle,
and ractangle.

write a cpp program to find area of circle , triangle and rectangle using
methode overloading

3.14 * r * r
1/2 * b * h
h * w*/

#include<iostream.h>
#include<conio.h>

class shape
{
	public:
		void shapes()
		{
			cout<<"\n"<<3.14*14*14;
		}
		void shapes(float b)
		{
			cout<<"\n"<<(0.5 * (b * 25));
		}
		void shapes(int h,int w)
		{
			cout<<"\n"<<h*w;
		}

};

void main()
{
	shape c,t,r;

	clrscr();

	c.shapes();
	t.shapes(20.25);
	r.shapes(90,25);

	getch();
}