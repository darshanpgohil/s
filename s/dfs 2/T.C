//general binary tree code of insertion,deletion,traversal operation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
};

struct node *root = NULL;

void main()
{
	int ch,v;

	while(1)
	{
		clrscr();
		printf("\n General Binary Tree Operation : ");
		printf("\n 1.Insert \n 2.Delete \n 3.Inorder \n 9.Exit ");
		printf("\n Enter Your Choice : ";


