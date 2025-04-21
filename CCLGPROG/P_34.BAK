#include<stdio.h>
#include<conio.h>

void main()
{
	int units;
	float bill;

	clrscr();

	printf("\n\n\t Enter units =>");
	scanf("%d",&units);

	if( units <= 50)
	{
		bill = units * 2.30;
	}
	else if ( units <= 100)
	{
		bill = 50 * 2.30 + (units - 50) * 2.60  ;
	}
	else if( units <= 250 )
	{
		bill = 50 * 2.30 + 50 * 2.60 + ( units - 100 ) * 3.25;
	}
	else
	{
		bill = 50 * 2.30 + 50 * 2.60 + 150 * 3.25 + ( units - 250 ) *  4.35;
	}

	printf(" %.2f is total bill ",bill);


	getch();
}