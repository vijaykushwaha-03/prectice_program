#include<stdio.h>
#include<conio.h>

int fact(int n);

int krishna(int n);

void main()
{
	int n;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

    //	printf("\n\n\t Factorial is => %d",fact(n));

	 printf("\n\n\t Sum is > %d",krishna(n));

	getch();
}

int fact(int n)
{
	int i, fac=1;


	for(i=1; i<=n; i++)
	{
		fac = fac * i;
	}

	return fac;
}

int krishna(int n)
{
	int rem,sum = 0,tmp;
	tmp = n;

	while( n > 0 )
	{
		rem = n%10;
		sum = sum + fact(rem);
		n = n / 10;
	}

	if(tmp == sum)
	{
		printf("\n\n\t IS KRISHNAMURTI ");
	}
	else
	{
		printf("\n\n\t IS NOT KRISHNAMURTI ");
	}
	return sum;
}