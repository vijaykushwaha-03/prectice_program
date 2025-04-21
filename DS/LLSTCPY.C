#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*temp,*newnode;
void insert()
{
      //	int ch=1;

		newnode = (struct node*)malloc(sizeof(struct node));
		printf(" Enter Data =>");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head == 0)
		{
			head = newnode;
			temp = head;
		}
		else
		{
			temp->next=newnode;
			temp = newnode;
		}
	  //	printf(" continu store .. (0/1)");
	    //	scanf("%d",&ch);

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

void copy()
{
	struct node *head1=0,*temp1,*newnode1;

	printf(" Original \n");
	display();
	printf("\n Duplicate \n");
	temp = head;

	while(temp!=0)
	{
		newnode1 = (struct node*) malloc(sizeof(struct node));

		if(head1 == 0)
		{
		      newnode1->data = temp->data;
		      head1 = newnode1;
		      newnode1->next = 0;
		      temp1 = newnode1;
		}
		else
		{
			newnode1->data = temp->data;
			temp1->next = newnode1;
			temp1 = newnode1 ;
			newnode1->next = 0;
		}

		temp = temp->next;
	}

	temp1 = head1;
	while(temp1!=0)
	{
		printf(" %d ",temp1->data);
		temp1 = temp1->next;
	}
}

void main()
{

	int chh;
	clrscr();
	do
	{
		printf("\n 1 Insert \n 2 display \n 3 Copy \n 4 Exit \n");
		printf("\n\t Enter Choice =>");
		scanf("%d",&chh);

		switch(chh)
		{
			case 1: //insert
			       insert();
			break;

			case 2: //display
				display();
			break;

			case 3: // COPY
				copy();
			break;

			case 4://exit
				exit(0);
			break;

		default:
			printf(" Wrong Choice ");
		}

	}while(chh);

		getch();


}
