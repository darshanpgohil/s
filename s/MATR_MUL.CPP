#include<iostream.h>
#include<conio.h>

class MATRIX
{
	public:
		int a[20][20];

		void get();
		friend MATRIX operator *(MATRIX M1,MATRIX M2)
		{
			MATRIX C;

			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					C.a[i][j] = 0;

					for(int k=0;k<3;k++)
					{
						C.a[i][j] += M1.a[i][k] * M2.a[k][j];
					}
				}
			}
			return C;
		}
};

void MATRIX::get()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t a"<<"["<<i<<"]"<<"["<<j<<"]"<<" : ";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
}

void main()
{
	MATRIX M1;
	MATRIX M2;
	clrscr();
	cout<<"\n Enter The First Matrix Value : ";
	M1.get();
	cout<<"\n Enter The Second Matrix Value : ";
	M2.get();

	MATRIX M3;

	M3 = M1*M2;

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t a "<<"["<<i<<"]"<<"["<<j<<"]"<<" : "<<M3.a[i][j];
		}
		cout<<"\n";
	}

	getch();
}

