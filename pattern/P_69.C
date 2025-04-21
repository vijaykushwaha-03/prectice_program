#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
	{
		for(j=1; j<=n; j++)
		{
			if( i+j <= n)
			{
				printf(" ");
			}
			else
			{
				printf("$");
			}
		}
	printf("\n");
	}
	getch();
}