// prime series

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,flag = 0;

	clrscr();

	printf("\n\n\t ENter number =>");
	scanf("%d",&n);

	for(i=2; i<=n; i++)
	{
		flag = 0;
		for(j=2; j<=i/2; j++)
		{
			if(i%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("\n\t %d",i);
		}
	}
	getch();

}