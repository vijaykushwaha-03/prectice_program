#include<stdio.h>
#include<conio.h>

int sum(int a,int b)
{
	return (a+b);
}

void main()
{
	int a,b,c;

	clrscr();

	printf("Enter Number 1 =>");
	scanf("%d",&a);

	printf("Enter Number 2 =>");
	scanf("%d",&b);

	c = sum(a,b);

	printf("sum is => %d ",c);

	getch();
}