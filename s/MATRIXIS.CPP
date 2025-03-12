#include<iostream.h>
#include<conio.h>

class matrix
{
	public:
		int a[10][10];

				void get();
				friend int operator ==(matrix &A,matrix &B){
				for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(A.a[i][j]!=B.a[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
	}
};

void matrix::get()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t a "<<"["<<i<<"]"<<"["<<j<<"]"<<" : ";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
}

/*friend int matrix::operator ==(matrix &A,matrix &B)
{

}*/


void main()
{
	matrix m1,m2;
	clrscr();

	cout<<"\n Enter The Value Of Matrix 1 : ";
	m1.get();

	cout<<"\n Enter The Value Of Matrix 2 : ";
	m2.get();

	int r = m1==m2;

	if(r==1)
	{
		cout<<"\n Same";
	}
	else
	{
		cout<<"\n Not Same";
	}

	getch();
}