#include<stdio.h>
#include<conio.h>

void main()
{
	char fname[20],lname[20];

	clrscr();

	printf("\n\n\t Enter str =>");
	gets(fname);

	strcpy(lname,fname);
	strrev(fname);

	if(stricmp(fname,lname) == 0)
	{
		printf("\n\n\t Palindrom");
	}
	else
	{
		printf("\n\n\t Not palidnrom");
	}
      //	printf(" %s",lname);

	getch();
}