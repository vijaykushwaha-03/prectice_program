// find maximum number using ternary operator

#include<stdio.h>
#include<conio.h>

void main()
{

	int max, a,b,c;

	clrscr();

	printf("\n\n\n\t Enter Three Numbers =>");
	scanf("%d,%d,%d",&a,&b,&c);

	max = a>b ? (a>c ? a:c) : (b>c ? b:c);

	printf("\n\n\t biggest number is %d ",max);


	getch();
}