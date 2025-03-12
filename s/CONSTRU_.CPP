#include<iostream.h>
#include<conio.h>
#include<string.h>

class univercity
{
	public:
		char u_name[20];
		int u_no;

		univercity(char *un,int uno)
		{
			strcpy(u_name,un);
			u_no = uno;
		}
};

class college : public univercity
{
	public:
		char c_name[50],city[50];

		college(char *un,int uno,char *cn,char *cit) : univercity(un,uno)
		{
			strcpy(c_name,cn);
			strcpy(city,cit);
		}
};

class student : public college
{
	public:
	     char s_name[50];
	     int s_no;

	     student(char *un,int uno,char *cn,char *cit,char *sn,int sno) : college(un,uno,cn,cit)
	     {
			strcpy(s_name,sn);
			s_no = sno;
	     }
};


class practicle
{
	public:
		int p1,p2;

		practicle(int y1,int y2)
		{
			p1 = y1;
			p2 = y2;
		}
};

class theory
{
   public:
	int cpp,dsa,bm,sad;
	theory(int cp,int ds,int b,int sa)
	{
		cpp = cp;
		dsa = ds;
		bm = b;
		sad = sa;
	}
};

class result:public theory,public practicle,public student{
	public:
		int tot;
		float per;

		result(char *un,int uno,char *cn,char *cit,char *sn,int sno,int c,int d,int b,int s,int x1,int x2):theory(c,d,b,s),practicle(x1,x2),student(un,uno,cn,cit,sn,sno)
		{
			tot = c + d + b + s + x1 + x2;
			per = (tot / 6.0);
		}

		void display()
		{
			cout<<"\n U_Name\tU_No\tC_Name\tCity\tS_Name\tS_No\tCpp\tDsa\tBm\tSad\t\nP1\tP2\tTotal\tPer\n";
			cout<<"\n\n-----------------------------------------------------------------------------------------------------------\n\n";
			cout<<"\n"<<u_name<<"\t"<<u_no<<"\t"<<c_name<<"\t"<<city<<"\t"<<s_name<<"\t"<<s_no<<"\t"<<cpp<<"\t"<<dsa<<"\t"<<bm<<"\t"<<sad<<"\t\n"<<p1<<"\t"<<p2<<"\t"<<tot<<"\t"<<per<<"\n";
		}
};

void main()
{
	result r("Mkbu",100,"Kbpccs","Mahuva","Darshan",17,100,100,100,100,100,100);
	clrscr();

	r.display();

	getch();
}