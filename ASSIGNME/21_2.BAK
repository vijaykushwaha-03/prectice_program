#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20][30],b[20][30],sum[20][30], r,c,i,j;

	clrscr();

	printf("\n\n\t Enter row and column you want =>");
	scanf("%d,%d",&r,&c);

	// READ

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("\n\t Enter a[%d][%d] =>",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("\n\t Enter b[%d][%d] =>",i,j);
			scanf("%d",&b[i][j]);
		}
	 }

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	 }

	// PRINT
	clrscr();

	printf("\n\n\t MATRIX 1\n ");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\t MATRIX 2\n ");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n\n");
	}

	printf("\n\n\t SUM IS \n ");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",sum[i][j]);
		}
		printf("\n\n");
	}

	getch();
}