#include<stdio.h>
#include<conio.h>

int sum(int ,int);
void table(int);


void main()
{
	int a,b,s;
	 int n;

	clrscr();

	printf("\n\n\t Enter Number u want to print table =>");
	scanf("%d",&n);

	printf("\n\n\t ENter a =>");
	scanf("%d",&a);

	printf("\n\n\t ENter b =>");
	scanf("%d",&b);

	 s = sum(a,b);

	 printf("\n\n\t Sum is => %d",s);

	 table(n);
	getch();

}                    // with ARG with Return type

int sum(int a, int b)
{
	return a + b;

}

void table(int n)
{

	int i;

	for(i=1; i<=10; i++)
	{
		printf("\n  %d * %d = %d",n,i,i*n);
	}
}
