#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
};

void insert(int);
void inorder(struct node*);
struct node* createnode(int);
void del(int);
struct node* getdeepestnode();
void deletedeepestnode(struct node*);

struct node* root=NULL;

void main()
{
	int ch,v;

	while(1)
	{
		clrscr();
		printf("\n Enter Your Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : printf("\n Enter The Value : ");
				 scanf("%d",&v);
				 insert(v);
				 break;

			case 2 : printf("\n Enter The Value For Delete : ");
				 scanf("%d",&v);
				 del(v);
				 break;

			case 3 : inorder(root);
				 getch();
				 break;

			case 9 : exit(0);
				 break;
		}
	}
}

struct node *createnode(int v)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = v;
	newnode->left=NULL;
	newnode->right=NULL;

	return newnode;
}

void insert(int v)
{
		int front=-1,rear=-1;
		struct node *q[50],*temp;

		struct node *newnode=createnode(v);

		if(root==NULL)
		{
			root=newnode;
			return;
		}

		q[++rear] = root;

		while(front!=rear)
		{
			temp=q[++front];
			if(temp->left==NULL)
			{
				temp->left=newnode;
				return;
			}
			else
			{
				q[++rear] = temp->left;
			}
			if(temp->right==NULL)
			{
				temp->right=newnode;
				return;
			}
			else
			{
				q[++rear]=temp->right;
			}
		}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("\n %d",root->data);
		inorder(root->right);
	}
}

void del(int v)
{
	int front=-1,rear=-1;
	struct node *q[50],*temp,*keynode=NULL,*deepestnode;
	if(root==NULL)
	{
		printf("\n Tree Is Empty");
		return;
	}

	if(root->left==NULL && root->right==NULL)
	{
		if(root->data==v)
		{
			free(root);
			root=NULL;
			return;
		}
		else
		{
			printf("\n Enter Value Is Not Matched : ");
			getch();
			return;
		}
	}

	q[++rear] = root;

	while(front!=rear)
	{
		temp=q[++front];

		if(temp->data==v)
		{
			keynode=temp;
		}
		if(temp->left!=NULL)
		{
			q[++rear] = temp->left;
		}
		if(temp->right!=NULL)
		{
			q[++rear] = temp->right;
		}
	}

	if(keynode!=NULL)
	{
		deepestnode=getdeepestnode();
		keynode->data=deepestnode->data;
		deletedeepestnode(deepestnode);
	}
	else
	{
		printf("\n Enter Value Is Not Matched");
		getch();
	}
}

struct node* getdeepestnode()
{
	int front=-1,rear=-1;
	struct node *q[50],*temp;

	q[++rear] = root;

	while(front!=rear)
	{
		temp=q[++front];

		if(temp->left!=NULL)
		{
			q[++rear] = temp->left;
		}

		if(temp->right!=NULL)
		{
			q[++rear] = temp->right;
		}
	}

	return temp;
}

void deletedeepestnode(struct node *deepestnode)
{
	int front=-1,rear=-1;
	struct node *q[50],*temp;

	q[++rear]=root;

	while(front!=rear)
	{
		temp=q[++front];

		if(temp==deepestnode)
		{
			temp=NULL;
			free(deepestnode);
			return;
		}
		if(temp->right!=NULL)
		{
			if(temp->right==deepestnode)
			{
				temp->right=NULL;
				free(deepestnode);
				return;
			}
			else
			{
				q[++rear] = temp->right;
			}
		}
		if(temp->left!=NULL)
		{
			if(temp->left==deepestnode)
			{
				temp->left=NULL;
				free(deepestnode);
				return;
			}
			else
			{
				q[++rear]=temp->left;
			}
		}
	}
}