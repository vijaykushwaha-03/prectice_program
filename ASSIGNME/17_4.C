#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j,a[20],tmp=0;

	clrscr();

	printf("\n\n\t Enter Size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter Number of %d =>",i);
		scanf("%d",&a[i]);
	}

	printf("\n\n\t Before shorting array ");

	for(i=0; i<n; i++)
	{
		printf(" %d",a[i]);
	}

	for(i=0; i<n; i++)
	{
		for(j= i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	printf("\n\n\t After shorting Array ");

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}
	getch();
}