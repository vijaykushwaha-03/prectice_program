#include<stdio.h>
#include<conio.h>

void buble(int a[10],int n)
{
	int i,j,temp=0;

	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}

	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] =  temp;
			}
		}
	}

	printf("\n\n After Sorting \n\n");

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

	buble(a,n);

	getch();
}