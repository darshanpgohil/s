#include<iostream.h>
#include<conio.h>

class MATCHS
{
	public:
		char *p_name;
		int n_matchs;
};

class TEST : public MATCHS
{
	int runs;
	float avg;
	public:
		void t_get()
		{
			cout<<"\n Enter The Player Name : ";
			cin>>p_name;

			cout<<"\n Enter The No Of Matchs Played : ";
			cin>>n_matchs;

			cout<<"\n Enter The Runs : ";
			cin>>runs;
		}
		void t_process()
		{
			avg = (float(runs) / n_matchs);
		}
		void t_put()
		{
			cout<<"\n"<<p_name<<"\t"<<n_matchs<<"\t"<<runs<<"\t"<<avg<<"\n";
		}
};

class ONEDAY : public MATCHS
{
	int runs;
	float avg;
	public:
		void o_get()
		{
			cout<<"\n Enter The Player Name : ";
			cin>>p_name;

			cout<<"\n Enter The No Of Matchs Played : ";
			cin>>n_matchs;

			cout<<"\n Enter The Runs : ";
			cin>>runs;
		}
		void o_process()
		{
			avg = (float(runs) / n_matchs);
		}
		void o_put()
		{
			cout<<"\n"<<p_name<<"\t"<<n_matchs<<"\t"<<runs<<"\t"<<avg<<"\n";
		}
};

class T20 : public MATCHS
{
	int runs;
	float avg;
	public:
		void t2_get()
		{
			cout<<"\n Enter The Player Name : ";
			cin>>p_name;

			cout<<"\n Enter The No Of Matchs Played : ";
			cin>>n_matchs;

			cout<<"\n Enter The Runs : ";
			cin>>runs;
		}
		void t2_process()
		{
			avg = (float(runs) / n_matchs);
		}
		void t2_put()
		{
			cout<<"\n"<<p_name<<"\t"<<n_matchs<<"\t"<<runs<<"\t"<<avg<<"\n";
		}
};

void main()
{
	MATCHS m;
	TEST t;
	ONEDAY o;
	T20 t1;

	clrscr();

	t.t_get();
	t.t_process();
	t.t_put();

	o.o_get();
	o.o_process();
	o.o_put();

	t1.t2_get();
	t1.t2_process();
	t1.t2_put();

	getch();
}