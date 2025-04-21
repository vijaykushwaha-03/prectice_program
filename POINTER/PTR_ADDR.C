#include<stdio.h>
#include<conio.h>

int main()
{
	int age = 22;
	int *ptr = &age;

	clrscr();


	 printf("\n\n\t Address \n");

	printf("\n  %u ",&age);
	printf("\n  %u",ptr);
	printf("\n  %u \n",&ptr);

	printf("\n\n\nt Value ");

	printf("\n %d",*ptr);
	printf("\n %d",*(&age));
	printf("\n %d ",age);

	getch();
	return 0;
}