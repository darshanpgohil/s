//file handling with read and write

#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f1;

	char filename[15],c;

	clrscr();

	printf("\n Enter Name Of File : ");
	gets(filename);

	f1 = fopen(filename,"w");

	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f1=fopen(filename,"r");
	while((c=getc(f1))!=EOF)
	{
		printf(" %c ",c);
	}

	fclose(f1);

	getch();
}

