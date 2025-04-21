// days converts into months

#include<stdio.h>
#include<conio.h>

void main()
{
	int days = 91,rem,mon;
	clrscr();

	mon = days/30;
	rem = days%30;

	printf(" %d day and %d months",rem,mon);

	getch();
}