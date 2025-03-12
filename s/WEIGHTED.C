#include<stdio.h>
#include<conio.h>

int no_vertices;

void initgraph(int [][10]);
void adjacencymatrix(int [][10]);
void printgraph(int [][10]);


void main()
{
	int g[10][10];

	clrscr();

	printf("\n Enter No Of Vertices : ");
	scanf("%d",&no_vertices);

	initgraph(g);

	adjacencymatrix(g);

	printgraph(g);

	getch();
}

void initgraph(int g[][10])
{
	int i,j;

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_vertices;j++)
		{
			g[i][j]=0;
		}
	}
}

void adjacencymatrix(int g[][10])
{
	int s,d,w;

	while(s!=-1 || d!=-1)
	{
		printf("\n Enter The Edge From - To Node : ");
		scanf("%d%d",&s,&d);

		printf("\n Enter Weight : ");
		scanf("%d",&w);

		g[s][d] = w;
		g[d][s] = w;
	}
}

void printgraph(int g[][10])
{
	int i,j;

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_vertices;j++)
		{
			printf(" g[%d][%d] : %d ",i,j,g[i][j]);
		}
		printf("\n");
	}
}
