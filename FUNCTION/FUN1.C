#include<stdio.h>
#include<conio.h>

void add();

void main()
{     //  clrscr();
	add();
    //	getch();
}

void add()
{
	 int a,b,tt;

		      clrscr();
	printf("\n\n\t Enter n1 =>");
	scanf("%d",&a);

	printf("\n\n\t Enter n2 =>");
	scanf("%d",&b);

	tt = a+b;

	printf("\n\n\t sum is => %d ",tt);
	      getch();
	}