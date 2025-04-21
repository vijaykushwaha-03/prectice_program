// find largest number in 3 numbers

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("Enter x value => ");
	scanf("%d",&x);

	printf("Enter y value => ");
	scanf("%d",&y);

	printf("Enter z value => ");
	scanf("%d",&z);

	if(x > y && x < z )
	{
		printf("%d is greter");
	}
	if(y > x && y < z )
	{
		printf("%d is greter");
	}
	if(z > y && z < x )
	{
		printf("%d is greter");
	}
	getch();
}