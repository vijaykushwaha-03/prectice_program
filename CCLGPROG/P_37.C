#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	long int fact = 1;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for( i=1; i<=n; i++ )
	{
		fact *= i;
	}
	printf("\n\n\t %d number factorial is => %ld",n,fact);

	getch();
}