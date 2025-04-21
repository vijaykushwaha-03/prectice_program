#include<stdio.h>
#include<conio.h>

void main()
{
	int no,rem,sum=0;

	clrscr();

	printf("\n\n Enter Number =>");
	scanf("%d",&no);

     //	tmp = no;

	while(no>0)
	{
		rem = no%10;
		printf("%d ",rem);
		sum = sum + rem;
		no = no / 10;
	}

	printf("sum of Digit => %d ",sum);

	getch();
}

