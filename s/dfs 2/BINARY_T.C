#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left,*right;
};

struct node *root=NULL;


struct node* insert(struct node *root,int v);
struct node* createnode(int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);

void main()
{
	int ch,v;
	clrscr();
	while(1)
	{
		printf("\n The Binary Search Tree ");

		printf("\n Enter Your Ch : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\n Enter The Data : ");
				scanf("%d",&v);

				if(root==NULL)
					root = insert(root,v);
				else
					insert(root,v);
				break;

			case 2 : inorder(root);
				 getch();
				 break;

			case 3 : preorder(root);
				 getch();
				 break;

			case 4 : postorder(root);
				 getch();
				 break;

			case 5 : exit(0);
				 break;
		}
	}
}

struct node* createnode(int v)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->data=v;

	return temp;
}

struct node* insert(struct node *no,int v)
{
	if(no==NULL)
	{
		return createnode(v);
	}
	if(v<no->data)
	{
		no->left = insert(no->left,v);
	}
	if(v>no->data)
	{
		no->right = insert(no->right,v);
	}

	return no;
}

void inorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		inorder(root->left);
		printf("\n %d ",root->data);
		inorder(root->right);
	}
}

void preorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		printf("\n %d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else{
	postorder(root->left);
	postorder(root->right);
	printf("\n %d ",root->data);}
}





