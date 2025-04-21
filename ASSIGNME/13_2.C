#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,n,sum=0;

	clrscr();

	printf("\n\n\t Enter Number => ");
	scanf("%d",&n);

	i=0;
	while(i<=n)
	{
		sum = sum + i;
		printf(" %d +",i);
		i++;
	}
	/*
	do
	{
		sum = sum + i;
		printf(" %d +",i);
		i+=2;
	}while(i<=n);
	     */
	printf("\n\n\t sum of is => %d ",sum);

	getch();
}