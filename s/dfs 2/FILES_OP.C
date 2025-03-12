#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f1,*f2;
	char ch;

	clrcsr();

	f1 = fopen("one.txt","w");

	printf("\n Enter The Data : ");
	while((ch=getchar())!=EOF)
	{
		putc(ch,f1);
	}

	fclose(f1);

	f1 = fopen("one.txt","r");
	f2 = fopen("two.txt","w");

	while((ch=getc(f1))!=EOF)
	{
		putc(ch,f2);
	}

	fclose(f1);
	fclose(f2);

	f2=fopen("two.txt","r");

	while((ch=getc(f2))!=EOF)
	{
		printf("%c",ch);
	}

	fclose(f2);


	getch();
}