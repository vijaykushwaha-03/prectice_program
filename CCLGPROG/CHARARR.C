#include<stdio.h>
#include<conio.h>

void main()
{
	char ch[50];
	int i;

	clrscr();

	printf("\n\n\t Enter String => ");
	gets(ch);

     //	printf("\n\n\t %s ",ch);
	puts(ch);

	i=0;

	while(ch[i] != '\0')
	{
		printf("\n %c",ch[i]);
		i++;
	}
	getch();

}