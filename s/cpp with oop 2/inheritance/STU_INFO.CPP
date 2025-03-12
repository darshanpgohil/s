#include<iostream.h>
#include<conio.h>

class student
{
	public:
		char *s_name;
		int s_roll;

		student()
		{
			cout<<"\n Enter Student Name & Roll_No : ";
			cin>>s_name>>s_roll;
		}
};

class test : public student
{
	public:
		int sub1,sub2;

		test()
		{
			cout<<"\n Enter The Sub1 & Sub2 Mark : ";
			cin>>sub1>>sub2;
		}
};

class result : public test
{
	public:
		int Total;

		result()
		{
			Total=sub1+sub2;
		}
};

void main()
{
}