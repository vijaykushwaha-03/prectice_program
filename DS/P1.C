#include<stdio.h>
#include<conio.h>

void main()
{
	int n[5],i,sum=0;

	clrscr();

	for(i=0; i<5; i++)
	{
		printf("\n\t Enter index a[%d] =>",i+1);
		scanf("%d",&n[i]);
	}

	for(i=0; i<n[i]; i++)
	{
		printf("\n\t Value of a[%d] is => %d ",i+1,n[i]);
		sum = sum+n[i];
	}

	printf("\n\n\t\t Sum is => %d",sum);


	getch();
}