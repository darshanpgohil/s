#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	char str[20];

	public:

		void get();
		void operator +(string s);
		friend void operator ==(string &s,string &s2)
		{
			cout<<"\n"<<strcpy(s.str,s2.str);
		}
};

void string::get()
{
	cout<<"\n Enter Your String : ";
	cin>>str;
}

void string::operator +(string s)
{
	cout<<"\n"<<strcat(str,s.str);
}

void main()
{
	string s,s1;
	clrscr();

	s.get();
	s1.get();

	s+s1;

	s.get();
	s1.get();

	s==s1;

	getch();
}