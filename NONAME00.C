#include<stdio.h>
#include<conio.h>
void main()
{
	int a;

	clrscr();

	printf(" \n\n\n\n\t Enter A Number =>");
	scanf("%d",&a);

	if(a>0)
	{
		printf("\n\n\n\t %d is Positive",a);
	}
	else if(a<0)
	{
		printf("\n\n\n\t %d is Negative",a);
	}
	else
	{
		printf("\n\n\n\t %d is Zero ",a);
	}
	getch();
}