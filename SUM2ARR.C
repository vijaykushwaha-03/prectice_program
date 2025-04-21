#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],b[10],tt[10],n;

	clrscr();

     //	printf("\n Enter size of =>");
   //	scanf("%d",&n);

	for(i=1; i<=5; i++)
	{
		printf("\n\n\t Enter mark-1 and 2 =>");
		scanf("%d,%d",&a[i],&b[i]);
	}

	for(i=1; i<=5; i++)
	{
		tt[i] = a[i] + b[i];
	}

	printf("\n\n\t marksheet");
	printf("\n\t---------------------");
	printf("\n\t m1\tm2\tsum");
	printf("\n\t---------------------");
	for(i=1; i<=5; i++)
	{
		printf("\n\t %d\t %d\t %d ",a[i],b[i],tt[i]);
	}


	getch();
}