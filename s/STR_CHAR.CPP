#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	public:
		char str[20];

		void get();
		friend char operator ==(string &s,string &s2)
		{
			if(strcmp(s.str,s2.str)==0)
			{
				return 'y';
			}
			else
			{
				return 's';
			}
		}
};

void string :: get()
{
	cout<<"\n Enter Your String : ";
	cin>>str;
}

void main()
{
	string s,s1;

	s.get();
	s1.get();

	char ss=(s==s1);

	if(ss=='y')
		cout<<"\n Yes";
	else
		cout<<"\n No";

	getch();
}