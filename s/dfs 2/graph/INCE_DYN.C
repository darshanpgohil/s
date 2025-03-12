//incidence matrix for add/remove edge/vertex

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int g[10][10];
int no_vertices;
int no_edges;

void add_Vertex();
void remove_Vertex();
void add_Edge();
void remove_Edge();
void print_Graph();

void main()
{
	int ch;

	while(1)
	{
		clrscr();

		printf("\n Incedence Matrix Operations ");
		printf("\n 1.Add_Vertex\n2.Add_Edge\n3.remove_edge\n4.remove_vertex\n5.print_Graph\n6.exit");

		printf("\n enter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : add_Vertex();
				 break;

			case 2 : add_Edge();
				 break;

			case 3 : remove_Edge();
				 break;

			case 4 : remove_Vertex();
				 break;

			case 5 : print_Graph();
				 getch();
				 break;

			case 6 :  exit(0);
				  break;
		}
	}
}

void add_Vertex()
{
	int i,j;

	printf("\n Enter No Of Vertices : ");
	scanf("%d",&no_vertices);

	printf("\n Enter NO Of Edges : ");
	scanf("%d",&no_edges);

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_edges;j++)
		{
			g[i][j]=0;
		}
	}
}

void print_Graph()
{
	int i,j;

	for(i=0;i<no_vertices;i++)
	{
		for(j=0;j<no_edges;j++)
		{
			printf("\t G[%d][%d] : %d ",i,j,g[i][j]);
		}
		printf("\n");
	}
}

void add_Edge()
{
	int s,d,eno;

	printf("\n Enter Edge From-To Node : ");
	scanf("%d%d",&s,&d);

	printf("\n Enter Edge NO : ");
	scanf("%d",&eno);

	if(s>=no_vertices || d>=no_vertices || eno>=no_edges)
	{
		printf("\n Invalide Data !!!!!!!");
		getch();
	}
	else
	{
		g[s][eno] = 1;
		g[d][eno] = -1;
	}
}

void remove_Edge()
{
	int x,i;

	printf("\n Enter Edge No For Remove : ");
	scanf("%d",&x);

	if(x>=no_edges)
	{
		printf("\n Invalide Input!!!!!!!!!!");
		getch();
	}
	else
	{
		while(x<no_edges)
		{
			for(i=0;i<no_vertices;i++)
			{
				g[i][x] = g[i][x+1];
			}
			x++;
		}
		no_edges--;
	}
}

void remove_Vertex()
{
	int x,i,j,k;

	printf("\n Enter Vertex For Delete : ");
	scanf("%d",&x);

	if(x>=no_vertices)
	{
		printf("\n Invalid Input ");
		getch();
	}
	else
	{
			for(i=0;i<no_edges;i++)
			{
				if(g[x][i]!=0)
				{
					k=i;
					while(k<no_edges)
					{
						for(j=0;j<no_vertices;j++)
						{
							g[j][k] = g[j][k+1];
						}
						k++;
					}
					no_edges--;
					i--;
				}
			}

			while(x<no_vertices)
			{
				for(j=0;j<no_edges;j++)
				{
					g[x][j]=g[x+1][j];
				}
				x++;
			}
			no_vertices--;
	}
}