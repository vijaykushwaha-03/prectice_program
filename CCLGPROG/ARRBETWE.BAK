#include<stdio.h>
#include<conio.h>

void main()
{
	int x[50],i,n,st,ed,sum=0;
	float avg=0;

	clrscr();

	printf("\n\n\t Enter size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter marks between [0-100] x[%d] =>",i);
		scanf("%d",&x[i]);
	}

	printf("\n\n\t Enter starting and Ending Point =>");
	scanf("%d,%d",&st,&ed);

	for(i=st; i<=ed; i++)
	{
		printf("\n\t value of x[%d] => %d",i,x[i]);
		sum = sum + x[i];
	}

		avg = sum/(ed-st);

	printf("\n\n\t The sum of Array is => %d",sum);
	printf("\n\n\t The Average of Arry is => %f",avg);

	getch();

}