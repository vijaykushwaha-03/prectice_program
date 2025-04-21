#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	int i;

	clrscr();

	printf("\n\n\t Enter string =>");
	gets(str);

	i = 0;

	while(str[i] != '\0')
	{
		printf("\n %c",str[i]);
		i++;
	}
	getch();
}