// Area of Traiangle (l*b)/2

#include<stdio.h>
#include<conio.h>

void main()
{
	float l,b,Tri;
	clrscr();

	printf("Enter area of Length => ");
	scanf("%f",&l);

	printf("Enter area of Breath => ");
	scanf("%f",&b);

	Tri = (l*b)/2;

	printf("The Area of Triangle is => %f",Tri);
	getch();
}