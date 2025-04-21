#include<stdio.h>
#include<conio.h>

void display(int);

void main()
{
	int n=3;
	clrscr();

	display(n);
	getch();
}

void display(int n)
{
    if(n<1)
    {
	return;
    }
    else
    {
	printf("%d",n);
	display(n-1);
	printf("\n%d",n);
    }
}