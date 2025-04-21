#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20],n,i,j,tmp=0,key=0,flag=0;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter num %d =>",i+1);
		scanf("%d",&a[i]);
	}
	//write
     //	printf("\n\n\t before sorting ");
	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}
	/*
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
		printf("\n\n\t After sorting ");

		for(i=0; i<n; i++)
		{
	printf(" %d ",a[i]);
	}
	*/

	printf("\n\n\t Enter Number you want to search =>");
	scanf("%d",&key);

	for(i=0; i<n; i++)
	{
		if(key == a[i])
		{
			flag = 1;
			printf("\n\n\t %d found at position %d ",key,i+1);
		}
	printf("\n");
	}

	if( flag == 0)
	{
		printf("\n\n\t Not found ");
	}
	getch();
}