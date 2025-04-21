#include<stdio.h>
#include<conio.h>
		  /*
int sechigh(int a[r][c] )
{
	int high,shigh,i,j;

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(high > a[i][j])
			{
				shigh = high;
				high = a[i][j];
			}
			else if ( shigh > a[i][j] && a[i][j] < high)
			{
				shigh = a[i][j];
			}

		}
	}
		return shigh;


} */
void main()
{
	int r,c,a[10][10],i,j,shigh,high;


	clrscr();

	printf("\n\t Enter Row and column =>");
	scanf("%d %d",&r,&c);

	printf("\n\t Enter Elements \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n\t value Elements \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}

	high = a[0][0];
	shigh = a[0][1];
	for(i=0; i<r; i++)
	{

		for(j=0; j<c; j++)
		{
			if(a[i][j] > high)
			{
				shigh = high;
				high = a[i][j];
			}
			else if ( a[i][j] > shigh && a[i][j] < high)
			{
				shigh = a[i][j];
			}

		}
	}

	printf("\n Second highest number is => %d",shigh);

    //	shigh = sechigh(a);

      //	printf("\n\t Second highest number in arra is => %d",shigh);

	getch();
}