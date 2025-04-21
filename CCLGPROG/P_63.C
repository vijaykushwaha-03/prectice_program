#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{

		for(j=i; j<=n; j++)   //2
		{
			printf(" ");
		}
			for(j=1; j<=i; j++)     //1
		{
			printf("*");
		}
	printf("\n");
	}
	getch();
}