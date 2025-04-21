#include<stdio.h>
#include<conio.h>

void main()
{
	char ch[20];
	int i;

	clrscr();

	printf("\n\n\t ENter string =>");
	gets(ch);

	puts(ch);

	i = 0;
	while( ch[i] != '\0')
	{
		printf("\n %c",ch[i]);
		i++;
	}

	printf("\n\n\t Length of str %d",i);
	getch();
}