#include<stdio.h>
#include<conio.h>
#include<math.h>

void sq(float);

float aos(float side);
float cir(float red);
float ract(float a,float b);

void main()
{        int n = 4;
		float a = 5.0;
		float b = 10.0;

	clrscr();

	printf("\n\n\t Area id +> %f",ract(a,b));

	printf("\n\n\t %f",pow(n,2));

	getch();
}

float aos(float side)
{
	return side * side;
}
float cir(float red)
{
	return  3.14 * red * red;
}
float ract(float a,float b)
{
	return a * b;
}