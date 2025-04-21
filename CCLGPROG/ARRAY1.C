#include<stdio.h>
#include<conio.h>

void main()
{
	int x[50],i,n;

	clrscr();

	printf("\n\n\t Enter size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter Value of x[%d] =>",i);
		scanf("%d",&x[i]);
	}

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Size of x[%d] is %d ",i,x[i]);
	}

	getch();
}