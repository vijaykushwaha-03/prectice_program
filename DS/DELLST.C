#include<stdio.h>
#include<conio.h>


struct node
{
	int data;
	struct node*next;
};

struct node *head=0,*newnode,*temp;

void create()
{


		newnode = (struct node*) malloc(sizeof(struct node));
		printf("\t Enter Data =>");
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
	temp  = head;

	while(temp !=0)
	{
		printf(" %d ",temp->data);
		temp = temp->next;
	}

}

void del_first()
{
	temp=head;
	head = head->next;
	free(temp);

}

void del_last()
{
	struct node *prenode;
	temp = head;

	while(temp->next!=0)
	{
		prenode = temp;
		temp = temp->next;
	}

	prenode->next = 0;

	free(temp);

}

void del_pos()
{
	int pos,i=1;

	printf("\n\t Enter Postion =>");
	scanf("%d",&pos);

	temp = head;

	while(i<pos-1)
	{
	   temp = temp->next;
	   i++;
	}

	newnode = temp->next;
	temp->next = newnode->next;

	free(newnode);
}
void main()
{
	int ch;

	clrscr();

	do
	{
		printf("\n 1 Create\n 2 Display\n 3 delete first\n 4 last\n 5 pos \n 6 exit");
		printf("\n\t Enter Your Choice =>");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: //create
				create();
			break;

			case 2: //display
				display();
			break;

			case 3: // del fir
				del_first();
			break;

			case 4: // del las
				del_last();
			break;

			case 5: // del pos
				del_pos();
			break;

			case 6: // exit
				exit(0);
			break;

		default:
			printf("!! WRONG CHOICE !!");

		}

	}while(ch>0);

	getch();
}