#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10],i,j,r,c;

	clrscr();

	//read

	printf("\n\n\t Enter row and column =>");
	scanf("%d,%d",&c,&r);

	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("\n\n\t Enter a[%d] [%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	// write

	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
			printf(" %d ",a[i][j]);

		}
		printf("\n\n");
	}
	getch();
}