#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,k=1,A=65,a=97,t=9;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	     //pattern

   /*
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=n; j++)
		{
			if(i+j <= n)
			{
				printf(" ");
			}
			else
			{
				printf("%d ",i);
			}
		}

	printf("\n");
	}
      */	     /*

	for(i=n; i>=0; i--)
	{
		for(j=0; j<=n; j++)
		{
			if(i+j < n)
			{
				printf(" ");
			}
			else
			{
				printf("* ");
			}
		}

	printf("\n");
	}
	      */
	 /*
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %d ",k);
			k++;
		}
	printf("\n");
	}
	*/
		 /*
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %d ",k);
			k++;
		}
	printf("\n");
	}      */
	     /*
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %c ",a);
			a++;
		}
	printf("\n");
	}  */
      /*
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf(" %d ",t);
			t--;
		}
	printf("\n");
	}
	*/


	getch();
}