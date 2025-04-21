#include<stdio.h>
#include<conio.h>

void linear();  //declare

void main()
{
	int a[30],n,i;

	clrscr();

	printf("\n\n\t Enter size of Array => ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter value %d => ",i+1);
		scanf("%d",&a[i]);
	}

	linear(a,n);

	getch();
}

void linear(int a[],int n)      //define
{
	 int flag = 0,i,key;

	 for(i=0; i<n; i++)
	 {
		printf(" %d ",a[i]);
	 }

	 printf("\n\n\t Enter u want search => ");
	 scanf("%d",&key);

	 for(i=0; i<n; i++)
	 {
		if (a[i] == key )
		{
			flag = 1;
			printf("\n\n\t %d found At Position  %d",key,i+1);
		}
	 }
	 if(flag == 0 )
	 {
		printf("\n\n\t %d not found ",key);
	 }
}