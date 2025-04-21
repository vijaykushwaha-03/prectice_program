#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;

	clrscr();

	printf("\n\t Enter Element \n");

	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0; i<5; i++)
	{
		printf(" %d ",a[i]);
	}


	printf("\n\t Revese \n");
	for(i=4; i>=0; i--)
	{
		printf(" %d ",a[i]);
	}
	getch();
}