// area of Rectangle l*b

#include<stdio.h>
#include<conio.h>

void main()
{
	float i,b,rect;
	clrscr();

	// Input

	printf("Enter Area of Length => ");
	scanf("%f",&l);

	printf("Enter Area of Bredth => ");
	scanf("%f",&b);

	// process

	rect = l*b;

	// output

	printf("The Area of Rectangle is => %f",rect);

	getch();

}