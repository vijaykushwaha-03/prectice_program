#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sum = 0,n;

	clrscr();

	printf("\n\n\t Enter n number =>");
	scanf("%d",&n);

	for( i=1; i<=n; i++)
	{
		if(i%2==0)
		sum += i;
	}

	printf("\n\n\t The sum of even number is => %d",sum);

	getch();
}