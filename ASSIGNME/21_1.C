#include<stdio.h>
#include<conio.h>

void main()
{
	int  i,j ,a[20][20],b[20][20],r,c;

	clrscr();

	 printf("\n\n\t Enter matrix =>");
	 scanf("%d,%d",&r,&c);


	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("\n\n\t Enter value of A[%d][%d] ==>",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("\t %d",a[i][j]);
		}
	printf("\n\n");
	}

	getch();
}



