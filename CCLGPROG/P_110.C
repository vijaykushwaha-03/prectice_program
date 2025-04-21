#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int i,n,y;
	double sum=0;
	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		y = i*i;
		sum = sum+1.0/(i*i);
		printf(" 1/%d + ",y);
	}
	printf(" ==> %lf",sum);

	getch();
}