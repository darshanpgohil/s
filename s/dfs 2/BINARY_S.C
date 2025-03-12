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
strucr node* del(struct node *root,int v);
struct node* createnode(int);
void inorder(struct node*);
struct node* findMin(struct node *root);

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

			case 3 : printf("\n Enter Data : ");
				 scanf("%d",&v);
				 del(root,v);
				 break;

			case 4 : exit(0);
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
	else{
	inorder(root->left);
	printf("\n %d ",root->data);
	inorder(root->right);}
}

struct node* del(struct node *root,int x)
{
	if(root==NULL)
		return NULL;

	if(x>root->data)
		root->right = del(root->right,x);

	else if(x<root->data)
		root->left = del(root->left,x);

	else
	{
		if(root->left == NULL && root->right == NULL)
		{
			free(root);
			return NULL;
		}
		else if(root->left == NULL || root->right == NULL)
		{
			struct node *temp;

			if(root->left == NULL)
				temp = root->right;
			else
				temp = root->left;

			free(root);

			return temp;
		}
		else
		{
			struct node *temp = findMin(root->right);
			root->data = temp->data;
			root->right = del(root->right,temp->data);
		}
	}
	return root;
}

struct node* findMin(struct node *root)
{
	if(root==NULL)
	{
		return NULL;
	}
	else if(root->left != NULL)
	{
		return findMin(root->left);
	}
	return root;
}