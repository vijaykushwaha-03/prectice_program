#include<stdio.h>
#include<conio.h>

void main()
{
	int rev=0,rem,n,tmp=0;
	char ch;
	clrscr();
	do
	{
	clrscr();
	rev = 0;
	tmp =0;
	printf("\n\n\t ENter number =>");
	scanf("%d",&n);

	tmp = n;

	while(n > 0)
	{
		rem = n%10;
		rev = (rev * 10) + rem;
		n = n / 10;
	}

	printf(" %d",rev);

	if(tmp == rev )
	{
		printf("\n %d is palindrom",rev);
	}
	else
	{
		printf("\n %d is not palindrom",rev);
	}

		printf("\n\n\t you still continu [Y/N] =>");
		scanf(" %c",&ch);

	}while(ch == 'Y' || ch == 'y');
	getch();
}