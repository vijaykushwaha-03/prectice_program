#include<stdio.h>
#include<conio.h>

int fact(int n);

void main()
{
	int n;

	clrscr();

	printf("\n\n\t Enter Number to find Factorial =>");
	scanf("%d",&n);

	printf("\n\n\t Factorial is => %d",fact(n));

	getch();
}
int fact(int n)
{
	int i,fac=1;

	for(i=1; i<=n; i++)
	{
		fac = fac * i;
	}

	return fac;
}