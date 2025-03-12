#include<iostream.h>
#include<conio.h>
#include<string.h>

class uni
{
	public:
		char u_name[50];

		uni(char *u_name)
		{
			strcpy(this->u_name,u_name);
		}

};

class college : public uni
{
	public:
		char c_name[50];

		college(char *u_name,char *c_name):uni(u_name)
		{
			strcpy(this->c_name,c_name);
		}
};

class student : public college
{
	public:
		char s_name[50];
		int cpp,ds,bm,sad;

		student(char *u_name,char *c_name,char *s_name,int cpp,int ds,int bm,int sad):college(u_name,c_name)
		{
			strcpy(this->s_name,s_name);
			this->cpp=cpp;
			this->ds=ds;
			this->bm=bm;
			this->sad=sad;
		}
};

class result : public student
{
	public:
		int tot;
		float per;

		result(char *u_name,char *c_name,char *s_name,int cpp,int ds,int bm,int sad):student(u_name,c_name,s_name,cpp,ds,bm,sad)
		{
			tot = cpp + ds + bm + sad;
			per = (float(tot) / 4.0);
		}

		void display();
};

void result::display()
{
	cout<<"\n-------------------------------------\n";
	cout<<"\n U_Name = "<<u_name;
	cout<<"\n C_Name = "<<c_name;
	cout<<"\n S_Name = "<<s_name;
	cout<<"\n Cpp = "<<cpp;
	cout<<"\n Ds = "<<ds;
	cout<<"\n Bm = "<<bm;
	cout<<"\n Sad = "<<sad;
	cout<<"\n Total = "<<tot;
	cout<<"\n Per = "<<per;
}

void main()
{
	result r("MKBU","KBPCCS","DARSHAN",100,100,100,100);

	r.display();
	getch();
}