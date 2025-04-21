#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i,rem,rev=0,tmp;

	clrscr();

	printf("\n\n\t Enter Number =>");
	scanf("%d",&no);

	tmp = no;

	while( no>0 )
	{
		rem = no%10;
		rev = (rev*10)+rem;
		no = no/10;
	}

	printf("\n\n\t Reverse of %d is %d ",tmp,rev);

	getch();
}