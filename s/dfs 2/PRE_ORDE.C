#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

struct node
{
	struct node *left;
	int data;
	struct node *right;
};

struct node* root=NULL,*ptr,*par,*nw;

int top=size;

struct node* stack[size];
struct node* temp;

void push(struct node*);
struct node* pop();


void main()
{
	  int ch,x;

	  clrscr();

	  do
	  {
		nw = (struct node*)malloc(sizeof(struct node));
		printf("\n Enter Data : ");
		scanf("%d",&x);
		nw->data = x;
		nw->left = NULL;
		nw->right = NULL;

		if(root==NULL)
		{
			root = nw;
		}
		else
		{
			ptr = root;

			while(ptr != NULL)
			{
				if(x==ptr->data)
				{
					printf("\n Data Is Already Added ");
					getch();
					exit(0);
				}

				par = ptr;

				if(x<ptr->data)
				{
					ptr = ptr->left;
				}
				else
				{
					ptr = ptr->right;
				}
			}

			if(x < par->data)
			{
				par->left = nw;
			}
			else
			{
				par->right = nw;
			}
		}

		printf("\n More Element : ");
		fflush(stdin);
		scanf("%d",&ch);
	  }while(ch!=0);

	  //preorder code

	  printf("\n Preorder Traversal With Iteration ");

	  ptr = root;

	  while(ptr!=NULL)
	  {
		printf(" %d ",ptr->data);

		if(ptr->right != NULL)
		{
			push(ptr->right);
		}
		if(ptr->left != NULL)
		{
			ptr=ptr->left;
		}
		else
		{
			temp = pop();
			ptr = temp;
		}
	  }
	  getch();
}

void push(struct node *temp)
{
	if(top==0)
	{
		printf("\n Stack Is Full");
	}
	else
	{
		top-=1;
		stack[top] = temp;
	}
}

struct node *pop()
{
	if(top==size)
	{
		printf("\n The Tree Has Been Already Traversed ");
		return NULL;
	}
	temp = stack[top];
	top+=1;
	return temp;
}