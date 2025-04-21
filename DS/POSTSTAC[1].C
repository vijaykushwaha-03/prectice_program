#include<stdio.h>
#include<conio.h>
#define N 10
int stack[N];
int top = -1;

void push(int ch)
{
		top++;
		stack[top] = ch;
	      //	printf("\n\t Inserted ");

}

int pop()
{
	int no;
	no = stack[top];
	top--;
	return no;
}
int eval(int ch ,int op1,int op2)
{
	switch(ch)
	{
		case '+':
			return (op1 + op2);
		case '-':
			return (op1 - op2);
		case '*':
			return (op1 * op2);
		case '/':
			return (op1 / op2);
	}
}


void main()
{
	char exp[10],ch;
	int i,op1,op2,res,result;

	clrscr();

	printf("\n\t Enter exp =>");
	gets(exp);

	for(i=0; exp[i]!='\0'; i++)
	{
		ch = exp[i];
		if(ch >= '0' && ch <='9' )
		{	//push
			push(ch - '0');

		}
		else
		{            //pop
			op2 = pop();
			op1 = pop();
			res = eval(ch,op1,op2);
			push(res);
		}

	}

	result= pop();
	printf("%d",result);

	getch();

}