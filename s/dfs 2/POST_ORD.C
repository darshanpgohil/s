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

struct stack
{
	int flag;
	struct node *subtree;
};


struct node* root=NULL,*ptr,*par,*nw;

int top=size;

struct stack stk[size];
struct stack temp;

struct node* stack[size];
//struct node* temp;

void push(int,struct node*);
struct stack pop();


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

	  //Post Order

	  printf("\n Inorder Traversal Is : ");
	  ptr=root;
	  POST_BEGIN:

	  while(ptr!=NULL)
	  {
		push(0,ptr);

		if(ptr->right != NULL)
		{
			push(1,ptr->right);
		}
		ptr = ptr->left;
	  }
	  temp = pop();

	  while(temp.flag==0)
	  {
		ptr = temp.subtree;
		printf(" %d ",ptr->data);
		temp = pop();
	  }
	  if(temp.flag==1)
	  {
		ptr = temp.subtree;
		goto POST_BEGIN;
	  }
	  getch();
}

void push(int f,struct node *temp)
{
	if(top==0)
		printf("\n Stack Is Full ");

	else
	{
		top-=1;
		stk[top].flag = f;
		stk[top].subtree = temp;
	}
}

struct stack pop()
{
	struct stack temp;

	if(top==size)
	{
		printf("\n Tree Has Been Traversed");
		getch();
		exit(0);
	}
	else
	{
		temp = stk[top];
		top+=1;
	}
	return temp;
}