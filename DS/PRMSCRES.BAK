#include<stdio.h>
#include<conio.h>

int prime(int no)
{
	int i ;

	for(i=2; i<no; i++)
	{
		if(no%i == 0)
		{
		   return 0;
		}
	}
	return 1;
}

void pprime(int no)
{
	int i;

	for(i=2; i<no; i++)
	{
		if(prime(i))
		{
			printf(" %d ",i);
		}
	}
}


void main()
{
	int no;

	clrscr();

	printf("\n\t ENter Number =>");
	scanf("%d",&no);

	pprime(no);

	getch();
}