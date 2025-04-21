#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],n,i,pos,ele;

	clrscr();

	printf("\n\t Enter Size of Array =>");
	scanf("%d",&n);

	printf("\n\t Enter Element \n");

	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n\t Values is \n");
	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

	/*
	printf("\n\t Enter Position and Elements =>");
	scanf("%d %d",&pos,&ele);
	n++;

	for(i=n-1; i>=pos; i--)
	{
		a[i] = a[i-1];
	}
	a[pos-1] = ele;

	  */

	printf("\n\t Enter Index to delete");
	scanf("%d",&pos);

	for(i=pos; i<n-1; i++)
	{

		a[i] = a[i+1];
	  //	n--;
	}
	printf("\n\t Values is \n");
	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}


	getch();
}