#include<stdio.h>
#include<conio.h>

int no_vertices;

void initgraph(int [][10]);
void adjacencymatrix(int [][10]);
void dfs_adjacency_matrix(int [][10],int [],int);


void main()
{
	int g[10][10],visited[10]={0};

	clrscr();

	printf("\n Enter No Of Vertices : ");
	scanf("%d",&no_vertices);

	initgraph(g);

	adjacencymatrix(g);

	dfs_adjacency_matrix(g,visited,0);

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
	int s,d;

	while(s!=-1 || d!=-1)
	{
		printf("\n Enter The Edge From - To Node : ");
		scanf("%d%d",&s,&d);

		g[s][d] = 1;
		g[d][s]=1;
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

