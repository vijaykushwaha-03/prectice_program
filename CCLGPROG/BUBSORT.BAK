#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,a[20],tmp=0;

	clrscr();

	printf("\n\n\t Enter array size =>");
	scanf("%d",&n);

	// read

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter number %d =>",i+1);
		scanf("%d",&a[i]);
	}

	// write

	printf("\n\n\t Before sorting ");

	for(i = 0; i<n; i++)
	{
		printf("\n %d ",a[i]);
	}

	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if( a[i] > a[j] )
			{
			     tmp = a[i];
			     a[i] = a[j];
			     a[j] = tmp;
			}
		}
	}

	printf("\n\n\t After shorting ");

	for(i = 0; i<n; i++)
	{
		printf("\n %d ",a[i]);
	}
	getch();
}