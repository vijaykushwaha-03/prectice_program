#include<stdio.h>
#include<conio.h>

int fabo(int);

void main()
{
	clrscr();

       printf(" %d ",fabo(6));

	getch();
}

int fabo(int n)
{
	int fbnm1,fbnm2,fb;

	if(n == 0)
	{
		return 0;
	}
	if(n == 1)
	{
		return 1;
	}

	fbnm1 = fabo(n-1);
	fbnm2 = fabo(n-2);

	fb = fbnm1 + fbnm2;

	return fb;


}