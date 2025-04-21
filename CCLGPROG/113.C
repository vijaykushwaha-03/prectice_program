#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],sum=0;

	clrscr();

	for(i=0; i<10; i++)
	{
		printf("\n Enter %d =>",i+1);
	       scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	printf("\n\n\t sum is => %d ", sum);
	getch();
}