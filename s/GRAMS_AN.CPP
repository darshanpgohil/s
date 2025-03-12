/*create class weight which consist members like gram and kilogram ,
to perform w3 = w1 + w2 using operator overloading*/

#include<iostream.h>
#include<conio.h>

class weight
{
	int gram,kilogram;
	public:
		void get();

		friend weight operator +(weight w1,weight w2)
		{
			weight w3;

			w3.gram = (((w1.gram)+(w2.gram)) + ((w1.kilogram*1000)+(w2.kilogram*1000)));

			w3.kilogram = w3.gram / 1000;
			w3.gram%=1000;

			return w3;
		}

		void put()
		{
			cout<<"\n Kilogram = "<<kilogram;
			cout<<"\n gram = "<<gram;
		}
};

void weight::get()
{
	cout<<"\n Enter The Kilogram : ";
	cin>>kilogram;

	cout<<"\n Enter The Gram : ";
	cin>>gram;
}

void main()
{
	weight w1,w2,w3;
	clrscr();

	w1.get();
	w2.get();

	w3 = w1 + w2;

	w3.put();

	getch();
}