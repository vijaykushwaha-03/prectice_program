#include<stdio.h>
#include<conio.h>

int sumofdigit(int n);

void main()
{
	int n;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	printf("\n\n\t Sum of Digit is => %d",sumofdigit(n));
     //	sumofdigit(n) ;
	getch();
}

int sumofdigit(int n)
{
	int  rem,sum = 0;


	while(n > 0)
	{
		rem = n % 10;
		printf(" %d +",sum);
		sum = sum + rem;
		n = n / 10;
	}

   //	printf("\n\n\t Sum of Digit is => %d",sum);

	return sum;
}
