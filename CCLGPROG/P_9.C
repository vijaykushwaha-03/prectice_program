// find area of circle  PI*r*r

#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float area_cir,r;
	clrscr();

	printf("Enter Radius => ");
	scanf("%f",&r);

	area_cir = PI*r*r;

	printf("Area of circle is => %f",area_cir);

	getch();
}