#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	 for(i=1; i<=n; i++)
	    {
		for(j=1; j<=i; j++) //pt2
		{
			printf("*");
		}
		for(j=i; j<=n; j++)
		{
			printf(" ");
		}

		for(j=1; j<=n; j++)
		{
			if(i+j <=n)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	    }

	    getch();

}