//adjacency matrix code for add/remove edges/vertices undirected graph

#include<stdio.h>
#include<conio.h>

int no_vertices=0;
int g[10][10];

void add_vertex();
void add_edge();
void remove_vertex();
void remove_edge();
void printgraph();

void main()
{
	int ch;

	while(1)
	{
		clrscr();

		printf("\n Adjacency Matrix For Undirected Graph Operations");
		printf("\n 1.add vertex \n 2.add edge \n 3. remove edge \n 4. remove vertex \n 5. print \n 6. Exit");

		printf("\n Enter Your Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : add_vertex();
				 break;

			case 2 : add_edge();
				 break;

			case 3 : remove_edge();
				 break;

			case 4 : remove_vertex();
				 break;

			case 5 : printgraph();
				 getch();
				 break;

			case 6 : exit(0);
				 break;
		}
	}
}

void add_vertex()
{
	int i;

	no_vertices++;

	for(i=0;i<no_vertices;i++)
	{
		g[i][no_vertices]=0;
		g[no_vertices-1][i]=0;
	}
}

void add_edge()
{
	int s,d;

	printf("\n Enter Edge From Node : ");
	scanf("%d",&s);

	printf("\n Enter Edge To Node : ");
	scanf("%d",&d);

	if(s>=no_vertices || d>=no_vertices)
	{
		printf("\n Invalid Inputs");
		getch();
	}
	else
	{
		g[s][d]=1;
		g[d][s]=1;
	}
}

void remove_edge()
{
	int s,d;

	printf("\n Enter Edge From-To Node : ");
	scanf("%d%d",&s,&d);

	if(s>=no_vertices || d>=no_vertices)
	{
		printf("\n Invalide Inputes ");
		getch();
	}
	else
	{
		g[s][d]=0;
		g[d][s]=0;
	}
}

void remove_vertex()
{
	int x,i;

	printf("\n Enter Vertex That You Want To Remove : ");
	scanf("%d",&x);

	if(x>=no_vertices)
	{
		printf("\n Invalide Input ");
		getch();
	}
	else
	{
		while(x<no_vertices)
		{
			//shift column to the left side

			for(i=0;i<no_vertices;i++)
			{
				g[i][x] = g[i][x+1];
			}

			//shift row to the top side

			for(i=0;i<no_vertices;i++)
			{
				g[x][i] = g[x+1][i];
			}
			x++;
		}
		no_vertices--;
	}
}

void printgraph()
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