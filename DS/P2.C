#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,i,j,a[10][10],rsum,csum;
	clrscr();

	printf("\n\t Enter Row and column =>");
	scanf("%d %d",&r,&c);



	printf("\n\t Enter Elements =>\n");
	for( i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\t value Elements =>\n");
	for( i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\t Sum of Rows \n");
	for( i=0; i<r; i++)
	{
		rsum = 0;
		for(j=0; j<c; j++)
		{
			rsum = rsum + a[i][j];

		}
		printf("\n\t %d Rows sum is %d",i+1,rsum);
	}

	printf("\n\t Sum of Columns \n");
	for( i=0; i<r; i++)
	{
		csum = 0;
		for(j=0; j<c; j++)
		{
			csum = csum + a[j][i];

		}
		printf("\n\t %d Columns sum is %d",i+1,csum);
	}
	getch();
}