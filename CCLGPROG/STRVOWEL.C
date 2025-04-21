#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s[50];
	int i,cnt=0;

	clrscr();

	printf("\n\n\t Enter String =>");
	gets(s);

	i = 0;

	while(s[i] != '\0')
	{

	switch ( s[i] )
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':

		cnt++;
	}
	  i++;
	}
	printf("\n\n\t Vowels is => %d",cnt);

	getch();

}