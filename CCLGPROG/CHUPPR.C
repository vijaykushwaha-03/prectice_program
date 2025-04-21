#include<stdio.h>
#include<conio.h>


void main()
{
	char name[50];
	int i;

	clrscr();

	printf("\n\n\t Enter String =>");
	gets(name);
	puts(name);

	i=0;
	while( name[i] != '\0')
	{


		if(isupper(name[i]))
		{
			name[i] =  32 + name[i];
		}
		else
		{
			name[i] = toupper(name[i]);
		}
	i++;
	}
	 printf("\n\n");
	puts(name);
	getch();
}