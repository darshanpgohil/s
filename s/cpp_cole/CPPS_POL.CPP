#include<iostream.h>
#include<conio.h>
#include<string.h>

class company
{
	public:
		char c_name[25];
		char city[25];

		company(){
		}
			company(char *cname,char *cit)
		{
			strcpy(c_name,cname);
			strcpy(city,cit);
		}

		virtual void calculate()=0;
		virtual void display()=0;
};

class salary : virtual public company
{
	public:
		long int b_salary;
		/*salary(char *c_name,char *city,long int b_salary):company(c_name,city)
		{
			this->b_salary = b_salary;
		}     */
		salary()
		{
		}

		salary(char *cname,char *cit,long int bsalary):company(cname,cit)
		{
			b_salary = bsalary;
		}
};

class allowness : public virtual company
{
	public:
		int da,ta,pf,hra;

		/*allowness(char *c_name,char *city,int da,int ta,int pf,int hra):company(c_name,city)
		{
		       this->da = da;
			this->ta = ta;
			this->pf = pf;
			this->hra = hra;
		}*/
		allowness()
		{
		}
		allowness(char *cname,char *cit,int d,int t,int p,int hr):company(cname,cit)
		{
		       da = d;
		       ta = t;
		       pf = p;
		       hra = hr;
		}
};

class employee:public salary,public allowness
{
	public:
		char e_name[25];
		float net_sal;
		/*employee(char *e_name,char *c_name,char *city,long int b_salary,int ta,int da,int pf,int hra):salary(c_name,city,b_salary),allowness(c_name,city,ta,da,pf,hra),company(c_name,city)
		{
			strcpy(this->e_name,e_name);
		}*/


		employee(){

		}
		employee(char *ename,char *cname,char *cit,long int bsalary,int t,int d,int p,int hr):salary(cname,cit,bsalary),allowness(cname,cit,t,d,p,hr),company(cname,cit)
		{
			strcpy(e_name,ename);
		}

		void calculate()
		{
			     /*	da = ((b_salary * 10)/100);
			ta = ((b_salary * 12)/100);
			pf = ((b_salary * 125)/100);
			hra = ((b_salary * 125)/100);    */

			net_sal = b_salary + da + ta + hra - pf;
		}

		void display()
		{
			cout<<endl<<" "<<e_name<<" "<<c_name<<" "<<city<<" "<<b_salary<<" "<<da<<" "<<ta<<" "<<pf<<" "<<hra<<endl;
		}
};

void main()
{

	employee e4;

	/*char e_name[25],c_name[25],city[25];
	long int b_salary;
	int da,ta,pf,hra;
	int ch;


	cout<<"\n Enter The Name Of Employee : ";
	cin>>e_name;

	cout<<"\n Enter The College Name : ";
	cin>>c_name;

	cout<<"\n Enter The City : ";
	cin>>city;

	cout<<"\n Enter The Basic Salary : ";
	cin>>b_slary;

	cout<<"\n Enter The Ta : ";
	cin>>ta;

	cout<<"\n Enter The Da : ";
	cin>>da;

	cout<<"\n Enter The Pf : ";
	cin>>pf;

	cout<<"\n Enter The Hra : ";
	cin>>hra;

	employee e(e_name,c_name,city,b_salay,ta,da,pf,hra);  */

	cout<<"\n Enter The Name Of Employee : ";
	cin>>e4.e_name;

	cout<<"\n Enter The College Name : ";
	cin>>e4.c_name;

	cout<<"\n Enter The City : ";
	cin>>e4.city;

	cout<<"\n Enter The Basic Salary : ";
	cin>>e4.b_salary;

		e4.da = ((e4.b_salary * 10)/100);
			e4.ta = ((e4.b_salary * 12)/100);
			e4.pf = ((e4.b_salary * 125)/100);
			e4.hra = ((e4.b_salary * 125)/100);

	employee e1(e4.e_name,e4.c_name,e4.city,e4.b_salary,e4.ta,e4.da,e4.pf,e4.hra);

	company *ptr;
	ptr=&e1;

	ptr->calculate();
	ptr->display();


	getch();
}