#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[20];

	clrscr();

	printf("\n\n\t ENter name =>");
	scanf("%s",name);

	 printf("\n\n\t Revese is => %s",strrev(name));

	getch();
}