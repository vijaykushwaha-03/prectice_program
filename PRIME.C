#include<stdio.h>
#include<conio.h>

void main()
{

	int n,i,flag = 0;

	clrscr();

	printf("Enter Number =>");
	scanf("%d",&n);

	if(n == 1)
		printf("Prime");

	for(i=2; i<n/2; i++)
	{
		if(n%i == 0)
		{
			flag = 1;
			break;
		}
	}

	if( flag == 1)
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}

	getch();
}