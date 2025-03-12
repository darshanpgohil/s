/* 	create Class Univercity Which Consist Members As U_name and E_no,

	create Class College Which Consist Members Like C_name And City,

	create Class Student Which Consist Members Like S_name,Seate No,

	create Class Theory That Consist Members Like Cpp,Bm,Ds,Sad,

	create Class Practicle Which Consist Members Like P1,P2

	create Class Result That Consist Mem. Like Total,Per,Calculate,Display

	Take Necessary Data Member and member Function Following Diagram Without Using Inheritance*/

#include<iostream.h>
#include<conio.h>
#include<string.h>


class univercity
{
	public:
		char u_name[20];
		int Eno;

		univercity()
		{
			strcpy(u_name,"Mkbu");
			Eno = 14;
		}

		void u_display()
		{
			cout<<"\n U_name = "<<u_name;
			cout<<"\n Eno = "<<Eno;
		}
};

class college
{
	public:
		char c_name[20],city[20];

		univercity u;

		college()
		{
			strcpy(c_name,"Kbpccs");
			strcpy(city,"Rajula");
		}
		void c_display()
		{
			cout<<"\n C_name = "<<c_name;
			cout<<"\n Eno = "<<city;
		}
};

class student
{
	public:
		char s_name[20];
		long int seate_no;
		college c;

		student()
		{
			strcpy(s_name,"Darshan");
			seate_no = 170895;
		}
};

class theory
{
	public:
		int Cpp,Bm,Ds,Sad;

		theory()
		{
			Cpp = 100;
			Bm = 100;
			Ds = 100;
			Sad = 100;
		}
};


class practicle
{
	public:
		int P1,P2;

		practicle()
		{
			P1 = 100;
			P2 = 100;
		}
};

class result
{
	public:
		int Tot;
		float Per;
		student s;
		practicle p;
		theory t;

		void calculate()
		{
			Tot = t.Cpp + t.Bm + t.Ds + t.Sad + p.P1 + p.P2;
			Per = (Tot / 6.0);
		}

		void display()
		{
			s.c.u.u_display();
			s.c.c_display();
			cout<<"\n Student Name : "<<s.s_name;
			cout<<"\n Seat No : "<<s.seate_no;
			cout<<"\n Cpp = "<<t.Cpp;
			cout<<"\n Bm = "<<t.Bm;
			cout<<"\n Ds = "<<t.Ds;
			cout<<"\n Sad = "<<t.Sad;
			cout<<"\n P1 = "<<p.P1;
			cout<<"\n P2 = "<<p.P2;
			cout<<"\n Total = "<<Tot;
			cout<<"\n Per = "<<Per;
		}
};

void main()
{
	result r;

	r.calculate();
	r.display();

	getch();
}