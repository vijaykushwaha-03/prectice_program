#include<stdio.h>
#include<conio.h>

void main()
{
	int n,tmp,sum=0,rem;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	tmp = n;

	while (n>0)
	{
		rem = n%10;
		printf(" %d +",rem*rem*rem);
		sum = sum + (rem*rem*rem);
		n = n/10;
	}

       //	printf("\n\n\t sum of digit is => %d",sum);

	if(tmp==sum)
	{
		printf("\n\t  %d is Amstrong ",tmp);
	}
	else
	{
		printf("\n\t  %d is not Amstrong",tmp);
	}

	getch();
}
