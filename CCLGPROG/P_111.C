#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,x;
	double sum=0;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		x = i*i;
		sum = sum - 1.0/x;
		printf("1/%d - ",x);
	}
	printf(" => %lf",sum);

	getch();
}