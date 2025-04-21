#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;

};

struct node *head=0,*newnode,*temp;

void create()
{
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("\n\t Enter Data =>");
	scanf("%d",&newnode->data);
	newnode->next = 0;

	if(head == 0)
	{
		head = newnode;
		temp = head;
	}
	else
	{
		temp->next = newnode;
		temp = newnode;
	}
}

void display()
{
	temp = head;
	while(temp!=0)
	{
		printf(" %d ",temp->data);
		temp = temp->next;
	}
}

void revers()
{
	struct node *pn = 0,*cn = head,*nn = head;

	while(nn!=0)
	{
	    nn = nn->next;
	    cn->next = pn;
	    pn = cn;
	    cn = nn;
	}

	head = pn;
	display();
/*	while(pn!=0)
	{
		printf(" %d ",pn->data);
		pn = pn->next;
	}
  */
}
void main()
{
	int ch;

	clrscr();

	do
	{
		printf("\n 1 Create \n 2 Dis \n 3 Reverse \n 4 Exit");
		printf("\n\t Enter Choice =>");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				create();
			break;

			case 2:
				display();
			break;

			case 3:
				revers();

			case 4:
				exit(0);
			break;

		default:
			printf("!! Wrong Choice !!");

		}
	}while(ch>0);

	getch();
}