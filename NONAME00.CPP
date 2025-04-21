#include<stdio.h>
#include<conio.h>

int perfect(int no)
{
	int i,sum=0;

	for(i=1; i<=no; i++)
	{
		if( no%i == 0 )
		{
			sum = sum+i ;
		}
	}
	if(no == sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int no;
	clrscr();

	printf("\n\t Enteree Number to check perffect or not =>");
	scanf("%d",&no);

	printf(" %d is perfect",perfect(no));
	getch();

}
