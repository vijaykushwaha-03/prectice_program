#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a,num;

	clrscr();

	printf("\n\n\t Enter Number => ");
	scanf("%d",&num);

	for ( i=1; i<=10; i++)
	{
	     a = num*i;
	     printf(" \n\n\t %d * %d = %d",num,i,a);
	}
	getch();
}