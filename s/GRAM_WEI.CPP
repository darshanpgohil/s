/* Create Class Weight Which Consist Members Like  Gram And Kilogram,
write a CPP Program For Addition Of Two Objects Using + operator overloading
and in converts into grams
*/

#include<iostream.h>
#include<conio.h>

class weight
{
	long int gram,kilogram;
	public:
		void get();

		friend long int operator +(weight w1,weight w2)
		{
			long int g;

			g = (((w1.gram) + (w1.kilogram * 1000)) + ((w2.gram) + (w2.kilogram * 1000)));

			return g;
		}
};

void  weight :: get()
{
	cout<<"\n Enter The Kilogram : ";
	cin>>kilogram;

	cout<<"\n Enter The Gram : ";
	cin>>gram;
}

void main()
{
	weight w1,w2;
	long int res;

	clrscr();

	w1.get();
	w2.get();

	res = w1 + w2;

	cout<<"\n Res = "<<res;

	getch();
}
