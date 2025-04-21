#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0,rem,tmp=0;
	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	tmp = n;

	while(n > 0)
	{
		rem = n%10;
		printf(" %d +",rem*rem*rem);
		sum = sum + rem*rem*rem;
		n = n/10;
	}
	printf("\n\n\t sum of digit => %d",sum);

	if(tmp == sum)
	{
		printf("\n\n\t %d is armstrong ",sum);
	}
	else
	{
		printf("\n\n\t %d is not armstrong ",sum);
	}
	getch();
}