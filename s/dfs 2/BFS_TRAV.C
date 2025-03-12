//incidence Matrix For Directed Graph

#include<stdio.h>
#include<conio.h>

int no_vertices;
int no_edges;

void initGraph(int [][10]);
void printGraph(int [][10]);
void incidenceMatrix(int [][10]);
void bfs_ince(int [][10],int [],int);

void main()
{
	int g[10][10],visited[10] = {0};

	clrscr();

	printf("\n Enter No Of Vertices : ");
	scanf("%d",&no_vertices);

	printf("\n Enter No Of Edges : ");
	scanf("%d",&no_edges);

	initGraph(g);
	incidenceMatrix(g);
	bfs_ince(g,visited,0);

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
		g[s][eno] = 1;
		g[d][eno] = -1;
	}
	}
}

void bfs_ince(int adj[][10],int visited[10],int start)
{
	int queue[10],rear=-1,front=-1,i=0,k;
	queue[++rear]=start;
	++front;
	visited[start]=1;
	while(rear>=front)
	{
		start=queue[front++];
		printf("%d ",start);

		for(i=0;i<no_vertices;i++)
		{
			if((adj[start][i] == 1 || adj[start][i]==-1) && visited[i]==0)
			{
				queue[++rear]=i;
				visited[i]=1;
			}
		}
	}
}