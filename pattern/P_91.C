#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,a=97;

	clrscr();

	printf("\n\n\t Enter Number => ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=3; j++)
		{
			printf(" %c ",a);
			a++;
		}
	printf("\n");
	}
	getch();
}