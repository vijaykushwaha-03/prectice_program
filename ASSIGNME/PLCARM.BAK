#include<stdio.h>
#include<conio.h>

int arm(int no)
{
	int rm,sum=0;

	while(no > 0)
	{
		rm = no % 10;
		sum = sum+(rm*rm*rm);
		no = no /10;
	}
	return sum;
}
	    /*
void printarm(int no)
{
	if(arm(no) == 1 )
	{
		printf("%d is armstrong ",no);
	}
}         */
void main()
{
	int no;
	clrscr();

	printf("\n\t Enter Number =>");
	scanf("%d",&no);

      // printf(" %d is Armstrong ",arm(no));

       if(arm(no) == no)
       {
	printf("\n\t %d is armstrong ",no);
	}
	else
	{
		printf("\n\t %d is not armstrong ",no);
	}
	getch();
}