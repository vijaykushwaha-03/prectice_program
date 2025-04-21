#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=12; i<=n; i=i+10)
	{
		sum = sum+i;
		printf("%d + ",i);
	}
	printf(" ==> %d",sum);

	getch();
}
