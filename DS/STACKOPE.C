#define N 10
#include<stdio.h>
#include<conio.h>
int stack[N];
int top = -1;

void push(int val)
{
    if(top == N-1)
    {
	printf("\n\t Stack is Overflow ");
    }
    else
    {
	top++;
	stack[top] = val;
	printf("\n\t Inserted ");
    }
}

void pop()
{
	int x;
	if(top == -1)
	{
		printf("\n\t Uderflow ");
	}
	else
	{
		x = stack[top];
		printf("\n\t Deleted %d",x);
		top--;
	}

}

void peek()
{
	if(top == -1)
	{
		printf("\n\t Uderflow ");
	}
	else
	{

		printf("\n\t Top element %d ",stack[top]);

	}

}

void display()
{
	int i;

	if(top == -1)
	{
		printf("\n\t Under flow ");
	}
	else
	{
		for( i=0; i<=top; i++)
		{
			printf(" %d ",stack[i]);
		}
	}

}

void main()

{
	int ch,val,n,rem;
	clrscr();

	do
	{
		printf("\n 1 PUSH \n 2 POP \n 3 PEEK \n 4 DISPLAY \n 5 EXIT ");
		printf("\n\t Enter Your Choice =>");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: //push
				printf("\n\t Enter Element You want to push =>");
				scanf("%d",&val);

				push(val);
			break;

			case 2: //POP
				pop();
			break;

			case 3:
				peek();
			break;

			case 4:
				display();
			break;

			case 5:
				exit(0);
			break;

		default:
			printf("\n\t Wrong choice ");
		}
	}while(ch != 6);

	getch();
}