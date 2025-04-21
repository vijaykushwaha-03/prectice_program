// Vloume of Cube  l*b*h

#include<stdio.h>
#include<conio.h>

void main()
{
	float l,b,h,vlo_cube;
	clrscr();

	printf("Enter Length => ");
	scanf("%f",&l);

	printf("Enter Breath => ");
	scanf("%f",&b);

	printf("Enter Heigth => ");
	scanf("%f",&h);

	vlo_cube = l*b*h;

	printf("The Vloum of cube is => %f",vlo_cube);

	getch();

}