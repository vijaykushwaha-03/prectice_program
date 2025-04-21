#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;

	clrscr();

	printf("\n\nt Enter Number =>");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf(" $ ");
		}
	printf("\n");
	}

	getch();
}