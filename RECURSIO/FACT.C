#include<stdio.h>
#include<conio.h>

int fact(int n);

void main()
{
	int n,fac;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	fac = fact(n);

	printf("\n\n\t Factorial is => %d",fac);

	getch();
}

int fact(int n)
{
	int fnm1,fc;

	if ( n == 0)
	{
		return 1;
	}

	fnm1 = fact(n - 1);
	fc = fnm1 * n;

	return fc;
}