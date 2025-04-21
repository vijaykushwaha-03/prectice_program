#include<stdio.h>
#include<conio.h>

void main()
{
	int m;
	char name[15];

	clrscr();

	printf("Enter student Name =>");
	scanf("%s",name);

	printf("Enter marks =>");
	scanf("%d",&m );

	if( (m<99) && (m>80) )
	{
		printf("\n\n\t Congratulation %s you get Dict",name);
	}
	else if ( (m<79 && m>60) )
	{
		printf("\n\n\t Congratu  %s you got first class ",name);
	}
	else if ( (m<59 && m>35) )
	{
		printf("\n\n\t Congratu  %s you got second class ",name);
	}
	else if ( (m<34 && m>0) )
	{
		printf("\n\n\t sorry..  %s you are fail ",name);
	}
	else
	{
		printf("\n\n\t %s please enter valide marks ",name);
	}
	getch();
}