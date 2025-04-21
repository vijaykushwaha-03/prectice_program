#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,flag=0;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&n);

	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{       flag=1;
			printf("\n\n\t  %d is Not prime => %d",n,i);
			break;
		}
	}
	if(flag==0)
	{
		printf("\n\n\t %d is prime ",n);
	}
	getch();
}