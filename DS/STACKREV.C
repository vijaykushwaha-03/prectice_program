#define N 5
#include<stdio.h>
#include<conio.h>
int stack[N];
int top = -1;

void push(int rem)
{
    if(top == N-1)
    {
	printf("\n\t Stack is Overflow ");
    }
    else
    {
	top++;
	stack[top] = rem;
	printf(" %d ",rem);
    }

}

int pop()
{
	int no;
	if(top == -1)
	{
		printf("\n\t Uderflow ");
	}
	else
	{
		no = stack[top];
		top--;
	}
	return no;

}

void main()

{
	int no = 175,rem,rev=0,i=1;
	clrscr();

		while(no > 0)
		{
			rem= no%10;
			push(rem);
			no = no/10;
		}

		while(top != -1)
		{
			rev = rev+pop()*i;
			i = i*10;
		}

		printf("\n Reverse no is %d",rev);

	getch();
}