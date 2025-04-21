#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,A=65,a=97,flag=0;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=3; j++)
			{
				if (flag==0)
				{
					printf(" %c ",A);
					flag=1;
				}
				else
				{
					printf(" %c ",a);
					flag=0;
				}
			}
		printf("\n");
	}

	getch();
}