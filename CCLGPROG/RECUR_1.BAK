#include<stdio.h>
#include<conio.h>

int sum(int n);

int main()
{

	clrscr();

	printf("\n\n\t Sum is => %d",sum(5));
	return 0;

	getch();
}

int sum(int n)

{

	int sumNm1 = sum(n-1);
	int sumN = sumNm1 + n;

	if(n == 1)
	{
		return 1;
	}
	return sumN;
}