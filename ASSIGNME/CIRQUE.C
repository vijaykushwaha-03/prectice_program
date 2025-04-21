#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int data)
{
	if((rear+1)%N == front)
	{
		printf("\n\t full ");
	}
	else if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		queue[rear] = data;
		printf("insertd 1");
	}
	else
	{
		rear =(rear+1)%N;
		queue[rear] = data;
		printf("insertde 3");
	}
}
void dequeue()
{
	int x;

	if(front==-1 && rear == -1)
	{
		printf("\n\t Under Flow");
	}
	else if(front == rear)
	{
		x = queue[front];
		front = -1;
		rear = -1;
		printf("dele => %d",x);
	}
	else
	{
		x = queue[front];
		front = (front+1)%N;
		printf("dele 2 =>  %d",x);
	}
}
void peek()
{
	if(front == -1 && rear == -1)
	{
		printf("\n\t Under Flow");
	}
	else
	{
		printf("%d",queue[front]);

	}

}
void display()
{
	int i;

	i = front;

	while(i!= rear)
	{
		printf(" %d ",queue[i]);
		i = (i+1)%N;
	}
	printf(" %d ",queue[rear]);
		 /*
	for(i=front; i<=rear; i=(i+1)%N)
	{

		printf(" %d ",queue[i]);
	}
	printf("%d",queue[rear]);
	*/

}
int isfull()
{
	if(rear == N-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(rear == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{

	int ch,data,x,y;


	clrscr();

		do
		{
			printf("\n 1 ENQueue\n 2 DEQueue\n 3 PEEK\n 4 DISPLAY\n 5 IsFull\n 6 IsEmpty\n 7 Exit");
			printf("\n\t Enter Your choice =>");
			scanf("%d",&ch);

			switch(ch)
			{
				case 1: //ENQUEUE
					printf("\n\t Enter Data =>");
					scanf("%d",&data);
					enqueue(data);
					break;

				case 2: //DEQUEUE
					dequeue();
					break;

				case 3: // PEEK
					peek();
					break;

				case 4: // DISPLAY
					display();
					break;

				case 5: // ISFULL
					x = isfull();
					if(x==1)
					{
						printf("full");
					}
					else
					{
						printf("not full");
					}
					break;

				case 6: // ISEMPTY
					y = isempty();
					if(y==1)
					{
						printf("Empty");
					}
					else
					{
						printf("not Empty");
					}
					break;

				case 7: // EXIT
					exit(0);
					break;

			default:
				printf("\t Wrong Choice !! ");
			}
		}while(ch>0);
	getch();

}