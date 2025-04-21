#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0,x;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
		sum = sum+(i*i);
		x= (i*i);
		printf("%d + ",x);
	}

	printf(" ==> %d",sum);

	getch();
}