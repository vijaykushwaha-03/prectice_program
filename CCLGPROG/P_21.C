// prog 21

#include<stdio.h>
#include<conio.h>

void main()
{
	float paisa;
	    int p;

	clrscr();

	printf("\n\n\n\t Enter float value =>");
	scanf("%f",&paisa);

	p = paisa*100;

	printf("\n\n\t %.2f float is convert %d integer",paisa,p);

	getch();
}