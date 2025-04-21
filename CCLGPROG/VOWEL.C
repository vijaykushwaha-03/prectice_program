#include<stdio.h>
#include<conio.h>

void main()
{
	char str[10];
	int  i,cnt= 0;

	clrscr();

	printf("\n Enter string =>");
	scanf("%s",str);

	while(str[i] != '\0')
	{
	switch (str[i])
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':

		cnt++;
	}i++;
	}
	printf("\n\n\t Vowels is => %d",cnt);
	getch();
}