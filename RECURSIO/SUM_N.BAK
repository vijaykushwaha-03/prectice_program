#include<stdio.h>
#include<conio.h>

int sum(int n);

void main()
{
	int n,dig;

	clrscr();


	printf("\n\n\t ENter number =>");
	scanf("%d",&n);

	dig = sum(n);

	printf("\n\n\t Sum of Digit is => %d",dig);

	getch();

}

int sum(int n)
{
	int sumnm1,sumn;

	if(n == 1)
	{
	return 1;
	}
	sumnm1 = sum(n-1);
	sumn = sumnm1 + n;

	return sumn;

}