#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();

	printf("\n\n\n\t Enter a number to check =>");
	scanf("%d",&n);

	if(n>0)
	{
		printf("\n\n\t %d is positive",n);
	}
	else if ( n<0)
	{
		printf("\n\n\t %d is Negative",n);
	}
	else
	{
		printf("\n\n\t %d is zero",n);
	}
	getch();
}