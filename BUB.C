#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20],i,j,n,tmp=0;

	clrscr();

	printf("\n\n\t Enter size of arr =>");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		printf("\n\t Enter number %d =>",i);
		scanf("%d",&a[i]);
	}

	printf("\n\n\t before sorting \n");

	for(i=1; i<=n; i++)
	{
		printf(" %d ",a[i]);
	}

	for(i=1; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(a[i] > a[j] )
			{
			    tmp = a[i];
			    a[i] = a[j];
			    a[j] = tmp;
			}
		}
	}

	printf("\n\n\t After sorting \n");

	for(i=1; i<=n; i++)
	{
		printf(" %d ",a[i]);
	}
	getch();
}