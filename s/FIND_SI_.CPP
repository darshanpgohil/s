#include<iostream.h>
#include<conio.h>
#include<math.h>


class find
{
	public:
		void findsc(int p,int q,int r)
		{
			cout<<"\n"<<((p*q*r)/100);
		}
		void findsc(int p,int n,int r,int time)
		{
			//cout<<"\n"<<p*pow(1+r/(100.0*n),(n*time))-p;
			float a = p*pow(1+r/100,n);
			p=p*n;
			float ci = a-p;
			cout<<ci;
		}
};

void main()
{
	find si,ci;
	clrscr();

	si.findsc(78,5,6);
	ci.findsc(1000,365,6,1);

	getch();

}