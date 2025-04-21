#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enq(int val)
{
	if((rear+1)%N == front)
	{
		printf("Overflow");
	}
	else if(rear == -1 && front == -1)
	{
		front = 0;
		rear = 0;

		queue[rear] = val;

	}
	else
	{
		rear = (rear+1)%N;//	rear++;
		queue[rear] = val;
		printf(" INSE");
	}
}

void deq()
{
	int x;

	if(front == -1 && rear == -1)
	{
		printf("Under flow");
	}
	else if(front == rear)
	{
		x = queue[front];
		front = -1;
		rear = -1;
	}
	else
	{
		x = queue[front];
		front = (front+1)%N; //	front++;
		printf("Deke %d",x);

	}
}

void dis()
{
	int i;

	i = front;
	while(i != rear)
	{
		printf("%d",queue[i]);
		i = (i+1)%N;
	}
	printf("%d",queue[rear]);

      //	for(i=front; i<=rear; i++)
       //	{
     //		printf(" %d ",queue[i]);
   //	}
}

void main()
{
	int n,val;

	clrscr();

	do
	{
		printf("\n 1 en \t 2 dq \t dis \t 4 exit");
		printf("\n\t Enter Choice =>");
		scanf("%d",&n);

		switch(n)
		{
			case 1:
				printf("Enter val =>");
				scanf("%d",&val);
				enq(val);

			break;

			case 2:
				deq();
			break;

			case 3:
				dis();
			break;

			case 4:
				exit(0);
			break;

		default:
			printf("!! WRONG CHOUCE !!");
		}
       } while(n>0);

	getch();
}