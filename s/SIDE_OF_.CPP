#include<iostream.h>
#include<conio.h>
#include<math.h>

class shape
{
	public:
		void area_side()
		{
			cout<<"\n"<<4*4;
		}
		void area_side(int s,int l,int b)
		{
			cout<<"\n"<<s+l+b;
		}
		void area_side(float l,float b)
		{
			cout<<"\n"<<(2*(l+b));
		}
};

void main()
{
	clrscr();

	shape s,r,t;

	s.area_side();
	t.area_side(4,2,4);
	r.area_side(2.45,7.98);

	getch();
}