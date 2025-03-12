#include<iostream.h>
#include<conio.h>
#include<string.h>


class univercity
{
	public:
		char u_name[20];
		int u_no;

		univercity()
		{
		}
		univercity(char *un,int eno)
		{
			strcpy(u_name,un);
			u_no = eno;
		}

		virtual void calculate() = 0;
		/*{
			r.total = t.cpp + t.ds + t.bm + t.sad + p.x + p.x2;
			r.per = r.total / 6.0;
		}*/

		virtual void display() = 0;
		/*{
			cout<<"\n Univercity Name : "<<u_name;
			cout<<"\n Univercity Code : "<<u_no;
			cout<<"\n Cpp : "<<t.cpp;
			cout<<"\n Ds : "<<t.ds;
			cout<<"\n Bm : "<<t.bm;
			cout<<"\n Sad : "<<t.sad;
			cout<<"\n P1 : "<<p.p1;
			cout<<"\n P2 : "<<p.p2;
			cout<<"\n Total : "<<r.total;
			cout<<"\n Per : "<<r.per;
		} */

};

class theory : virtual public univercity
{
	public:
		int cpp,ds,bm,sad;

		/*theory(){

		} */
		theory(char *un,int uno,int c,int d,int b,int s):univercity(un,uno)
		{
			cpp = c;
			ds = d;
			bm = b;
			sad = s;
		}
};

class practicle : virtual public  univercity
{
	public:
		int p1,p2;

		practicle(char *un,int uno,int x,int x2):univercity(un,uno)
		{
			p1 = x;
			p2 = x2;
		}

};


class result : public theory,public practicle
{
	public:
		int total;
		float per;

		result(char *un,int uno,int c,int d,int b,int s,int x,int x2):theory(un,uno,c,d,b,s),practicle(un,uno,x,x2),univercity(un,uno)
		{
		}

		void calculate()
		{
			total = cpp + ds + bm + sad + p1 + p2;
			per = total /6.0;
		}

		void display()
		{
			cout<<"\n Univercity Name : "<<u_name;
			cout<<"\n Univercity Code : "<<u_no;
			cout<<"\n Cpp : "<<cpp;
			cout<<"\n Ds : "<<ds;
			cout<<"\n Bm : "<<bm;
			cout<<"\n Sad : "<<sad;
			cout<<"\n P1 : "<<p1;
			cout<<"\n P2 : "<<p2;
			cout<<"\n Total : "<<total;
			cout<<"\n Per : "<<per;
		}
};

void main()
{
	univercity *U;
	result r("Mkbu",100,100,100,100,100,100,100);

	clrscr();

	U=&r;


	/*u.calculate();
	u.display();*/

	U->calculate();
	U->display();

	getch();
}