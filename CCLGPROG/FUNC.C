#include<stdio.h>
#include<conio.h>

void add();
void sub();
void mul();

void add()
{
	int a,b,tt;
	clrscr();

	printf("\n\t ... Addition is ...");

	printf("\n\n\t Enter Number A =>");
	scanf("%d",&a);

	printf("\n\n\t Enter Number B =>");
	scanf("%d",&b);

	tt = a + b;

	printf("\n\n\t sum is => %d",tt);
	getch();
}

void sub()
{
	int a,b,tt;
	clrscr();

	printf("\n\t ... Subraction is ...");

	printf("\n\n\t Enter Number A =>");
	scanf("%d",&a);

	printf("\n\n\t Enter Number B =>");
	scanf("%d",&b);

	tt = a - b;

	printf("\n\n\t Subtaction is => %d",tt);
	getch();
}

void mul()
{
	int a,b,tt;
	clrscr();

	printf("\n\t ... Multiplication is ...");

	printf("\n\n\t Enter Number A =>");
	scanf("%d",&a);

	printf("\n\n\t Enter Number B =>");
	scanf("%d",&b);

	tt = a * b;

	printf("\n\n\t multiplication is => %d",tt);
	getch();
}
void main()
{
	int n;
	char ch;

	clrscr();

	do
	{
	printf("\n\t 1.Addition ");
	printf("\n\t 2.substraction");
	printf("\n\t 3.multiplication");
	printf("\n\t 4.exit");

	printf("\n\n\t Enter Your choice =>");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			exit(0);

	default :
		printf("\n\n\t Enter valid number ");
	}

	printf("\n\n\t Do u want to cantinu =>");
       //	flushall();
      //	gets(ch);
	 scanf(" %s",&ch);

	}while(ch == 'y' || ch == 'Y');

	getch();
}