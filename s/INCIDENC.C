//incidence Matrix For Directed Graph

#include<stdio.h>
#include<conio.h>

int no_vertices;
int no_edges;

void initGraph(int [][10]);
void printGraph(int [][10]);
void incidenceMatrix(int [][10]);

void main()
{
	int g[10][10];

	clrscr();

	printf("\n Enter No Of Vertices : ");
	scanf("%d",&no_vertices);

	printf("\n Enter No Of Edges : ");
	scanf("%d",&no_edges);

	initGraph(g);
	incidenceMatrix(g);
	printGraph(g);

	getch();
}

void initGraph(int g[][10])
{
	int i,j;

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_edges;j++)
		{
			g[i][j] = 0;
		}
	}
}

void incidenceMatrix(int g[][10])
{
	int s,d,eno;

	while(s!=-1 || d!=-1){
	printf("\n Enter Edge From-To Node : ");
	scanf("%d%d",&s,&d);

	printf("\n Enter Edge Number : ");
	scanf("%d",&eno);

	if(s>=no_vertices || d>=no_vertices || eno>=no_edges)
	{
		printf("\n Invalid Inputs ");
		getch();
	}
	else
	{
		if(s!=d)
		{
		g[s][eno] = 1;
		g[d][eno] = -1;
		}
		else
		{
			g[s][eno]=1;
		}
	}
	}
}

void printGraph(int g[][10])
{
	int i,j;

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_edges;j++)
		{
			printf("g[%d][%d] : %d ",i,j,g[i][j]);
		}
		printf("\n");
	}
}