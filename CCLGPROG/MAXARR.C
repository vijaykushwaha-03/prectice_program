#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20],max=0,i,n;

	clrscr();

	printf("\n\n\t Enter Size of Array => ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter number %d =>",i+1);
		scanf("%d",&a[i]);
	}
	//write

	for(i=0; i<n; i++)
	{
		printf("\n\t [%d] is => %d",i+1,a[i]);
	}

	for(i=0; i<n; i++)
	{
		if( a[i] > max)
		{
			max = a[i];
		}
	}

	printf("\n\n\t Maximum number is => %d",max);

	getch();
}