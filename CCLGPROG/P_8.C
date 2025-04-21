 //celsuis Fahrenheit   ((c*9)/5)+32 ;

#include<stdio.h>
#include<conio.h>

void main()
{
	float fah,cel;
	clrscr();

	printf("\n\n\t Enter celsiu => ");
	scanf("%f",&cel);

	fah = (cel*1.8)+32;

	printf("\n\n\t %.2f celsius Fahrenheit is  => %.2f",cel,fah);

	getch();
}