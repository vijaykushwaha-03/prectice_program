#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],n,i,pos,num;

	clrscr();

	printf("\n Enter size of arr =>");
	scanf("%d",&n);

	printf("\n Enter elemnt =>");

	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n value is \n");

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

	printf("\n ENter number u want to add =>");
	scanf("%d",&num);

	printf("\n Enter Position =>");
	scanf("%d",&pos);

	if( pos <= 0 || pos > n+1)
	{
		printf("invalid");
	}
	else
	{
		for(i=n-1; i>=pos-1; i--)
		{
			a[i+1] = a[i];
		}
		a[pos-1] = num;
		n++;

		for(i=0; i<n; i++)
		{
			printf("\n %d ",a[i]);
		}
	}
	getch();
}