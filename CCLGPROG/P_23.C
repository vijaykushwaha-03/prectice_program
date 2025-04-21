#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;

	clrscr();

	printf("\n\n\n\t Enter two numbers =>");
	scanf("%d,%d",&a,&b);

	if(a>b)
	{
		printf("\n\n\t %d a is bigger",a);
	}
	else
	{
		printf("\n\n\t %d b is bigger",b);
	}
	getch();
}