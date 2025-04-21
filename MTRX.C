#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][20],i,j,st,ed;

	clrscr();

	printf("\n\n\t Enter row and column =>");
	scanf("%d,%d",&st,&ed);

	for(i=0; i<st; i++)
	{
		for(j=0; j<ed; j++)
		{
			printf(" Enter [%d][%d] =>",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<st; i++)
	{
		for(j=0; j<ed; j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n\n");
	}

	printf("\n\n\t Transpose \n");

	for(i=0; i<st; i++)
	{
		for(j=0; j<ed; j++)
		{
			printf(" %d ",a[j][i]);
		}
		printf("\n\n");
	}


	getch();
}