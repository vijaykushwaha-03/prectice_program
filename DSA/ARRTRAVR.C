#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],n,i;

	clrscr();

	printf("\n Enter size of arr =>");
	scanf("%d",&n);

	printf("\n Enter elemnt =>");

	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n value is \n");

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}
	getch();
}