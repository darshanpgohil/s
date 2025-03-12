#include<stdio.h>
#include<conio.h>

int no_vertices;

void initgraph(int **);
void adjacencymatrix(int **);
void printgraph(int **);

void main()
{
	int **a,i;

	clrscr();

	printf("\n Enter Number Of Vertices : ");
	scanf("%d",&no_vertices);

	a=(int**)malloc(no_vertices*sizeof(int*));

	for(i=0;i<no_vertices;i++)
	{
		a[i]=(int*)malloc(no_vertices*sizeof(int));
	}

	//initialize matrix with 0
	initgraph(a);
	//add edges to vertices
	adjacencymatrix(a);
	//print Graph
	printgraph(a);
	getch();
}

void initgraph(int **a)
{
	int i,j;

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_vertices;j++)
		{
			a[i][j]=0;
		}
	}
}

void adjacencymatrix(int **a)
{
	int s,d;

	while(s!=-1 || d!=-1)
	{
		printf("\n Enter The Edge From Node : ");
		scanf("%d",&s);

		printf("\n Enter The Edge To Node : ");
		scanf("%d",&d);

		a[s][d]=1;
		a[d][s]=1;
	}
}

void printgraph(int **a)
{
	int i,j;

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_vertices;j++)
		{
			printf("\t a[%d][%d] : %d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
