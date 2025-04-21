#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,A=28;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		A=65;
		if(i%2==0)
		{
			for(j=1; j<=i; j++)
			{
				printf(" %c ",A);
				A++;
			}
		}
		else
		{
			for(j=1; j<=i; j++)
			{
				printf(" %d ",j);
			}
		}
	printf("\n");
	}
	getch();
}