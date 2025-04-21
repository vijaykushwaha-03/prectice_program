#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int no)
{
	int i;

	for(i=2; i<no/2; i++)
	{
		if(no%i == 0)
		{
			return 0; //not prime
		}
	}
	return 1; //prime
}

int rotate(int no)
{
	int lno = no%10;
	int nodigit = log10(no)+1;

	return (no/10) + (lno * pow(10,nodigit - 1));
}

int circuler(int no)
{
	int i, orno = no;
	int nodigit = log10(no) + 1;

	for(i=0; i<nodigit; i++)
	{
		if(!prime(no))
		{
			return 0;
		}
		no = rotate(no);
	}
	return 1;
}

void main()
{
	int no;

	clrscr();

	printf("\n\t ENter Number =>");
	scanf("%d",&no);

	if(circuler(no))
	{
		printf("\n\t %d is circlular ",no);
	}
	else
	{
		printf("\n\t %d is not Circular",no);
	}
	getch();
}