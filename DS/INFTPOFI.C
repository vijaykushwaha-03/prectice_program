#include<stdio.h>
#include<conio.h>
#include<string.h>

char stack[50];
int top = -1;

void push(char ch)
{
	if(top>=49)
	{
		printf("\t Overflow");
	}
	else
	{
		top++;
		stack[top] = ch;
	}
}

char pop()
{
	char ch;

	if(top == -1 )
	{
		printf("\t  Underflow ");
	}
	else
	{
		ch = stack[top];
		top--;
	}
	return ch;

}

int prec(char ch)
{
    switch(ch)
    {
	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;

	case '^':
		return 3;

	default:
		return -1;
    }

}

void post(char infix[])
 {
	char postfix[50],temp;
	char symbol;
	int l,index = 0,pos=0;

	l = strlen(infix);
	push('#');

	while(index < l)
	{
		symbol = infix[index];
		switch(symbol)
		{
			case '(':
				push(symbol);
				break;

			case ')':
				temp = pop();
				while(temp != '(')
				{
					postfix[pos] = temp;
					pos++;
					temp = pop();
				}
				break;

			case '+':
			case '-':
			case '/':
			case '*':
			case '^':

				while(prec(stack[top]) >= prec(symbol))
				{
					temp = pop();
					postfix[pos] = temp;
					pos++;
				      //	temp = pop();
				}
				push(symbol);
				break;

			default:
				postfix[pos++] = symbol;
			break;
			}
			index++;
		}
		while(top>0)
		{
			temp = pop();
			postfix[pos++] = temp;
		}
		postfix[pos++] = '\0';
		puts(postfix);

	//	return;

 }

void main()
{
	char infix[50];
	clrscr();

	printf("\n\t Enter infix exp =>");
	gets(infix);
	post(infix);
	getch();
}