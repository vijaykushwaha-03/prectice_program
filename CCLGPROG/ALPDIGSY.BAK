#include<stdio.h>
#include<conio.h>

void main()
{
	char str[50];
	int i,cnt1=0,cnt2=0,cnt3=0;

	clrscr();

	printf("\n\n\t Enter String =>");
	gets(str);

	printf("\n\n\t String is =>");
	puts(str);

	i=0;
	while( str[i] != '\0')
	{
		if(isalpha(str[i]))
		{
			cnt1++;
		}
		else if ( isdigit(str[i]))
		{
			cnt2++;
		}
		else
		{
			cnt3++;
		}
	i++;
	}
	printf("\n\n\t alphabet is => %d",cnt1);
	printf("\n\n\t Digit is => %d",cnt2);
	printf("\n\n\t Special symbole is => %d",cnt3);

	getch();
}