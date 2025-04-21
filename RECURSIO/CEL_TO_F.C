#include<stdio.h>
#include<conio.h>

float faren(float cel);

void main()
{
	float n;
	clrscr();

	printf("\n\n\t Enter Celcius =>");
	scanf("%f",&n);

	printf("far : %f",faren(n));
			     getch();

      //	clrscr();
}

float faren(float cel)
{
	float fan = cel * 1.8 + 32;
	return fan;
}