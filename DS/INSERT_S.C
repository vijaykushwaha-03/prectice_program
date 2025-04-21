#include<stdio.h>
#include<conio.h>

void insert_sort(int a[10],int n)
{
	int i,j,temp=0;

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

	for(i=1; i<n; i++)
	{
		temp = a[i];
		j = i-1;

		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}

	printf("\n\n AfterInsertion  Sorting \n\n");

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

}
void main()
{
	int n,a[10],i;

	clrscr();

	printf("\n\t Enter Size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n Enter Element =>");
		scanf("%d",&a[i]);
	}

	insert_sort(a,n);

	getch();
}