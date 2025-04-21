#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50],i,n,key=0,flag=0;
	char ch;
	clrscr();

	printf("\n\n\t Enter Size of Array =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter value of a[%d] =>",i+1);
		scanf("%d",&a[i]);
	}
	do
	{
	  for ( i=0; i<n; i++)
	  {
		printf("\n\n\t %d",a[i]);
	  }

	 printf("\n\n\t value of value you search => ");
	 scanf("%d",&key);
	for(i=0; i<n; i++)
	{


		if( a[i] == key)
		{
			flag = 1;
			printf("\n\n\t %d found at position %d",key,i+1);
			break;
		}
	}

	if ( flag == 0)
	{
		printf("\n\n\t key Not found ",key);
	}
	printf("\n\n you still continue [Y/y]:: ");
	flushall();
	ch=getchar();

	}while(ch=='Y' || ch =='y');

	getch();
}
