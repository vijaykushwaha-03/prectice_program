// check positive and negative number

#include<stdio.h>
#include<conio.h>

void main()
{
	int num ;

	clrscr();

	printf("\n\n\t Enter number to check pos or neg => ");
	scanf("%d",&num);

	if(num >= 0)
	{
		printf("\n\n\t %d is positive ");
	}
	else
	{
		printf("\n\n\t %d is negetive ");
	}
	getch();
}