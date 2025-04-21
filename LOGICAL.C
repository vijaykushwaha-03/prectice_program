#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,no,flag = 0;
	clrscr();

	printf("\n\t Enter Number =>");
	scanf("%d",&no);

	for(i=2; i<no; i++)
	{
		flag = 0;
		for(j=2; j<=i/2; j++)
		  {
		if(i%j == 0)
		{
			flag = 1;
		      //	printf("not prime");
		      break;
		}
		}
	if(flag == 0)
	{
		printf("\n%d",i);
	}
	}
	getch();
}