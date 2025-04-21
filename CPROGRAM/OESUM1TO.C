// sum odd and even number from 1to n

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,odd_sum = 0,even_sum = 0;

	clrscr();

	printf("\n\n\tEnter Number => ");
	scanf("%d",&num);

	for(i=1; i<=num; i++)
	{
		if(i%2==0)
		{
			even_sum = i + even_sum;
		}
		else
		{
			odd_sum = odd_sum + i;
		}
	}

	printf("\n\n\tThe Sum of ODD number is => %d",odd_sum);
	printf("\n\n\tThe Sum of EVEN number is => %d",even_sum);
	getch();
}