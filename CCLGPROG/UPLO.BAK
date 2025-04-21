#include<stdio.h>
#include<conio.h>

void main()
{
	char name[20];
	int i;

	clrscr();

	printf("\n\n\t Enter string =>");
	gets(name);

	puts(name);

	i = 0;
	while(name[i] != '\0')
	{
		if(islower(name[i]))
		{
			name[i] = toupper(name[i]);
		}
		else
		{
			name[i] = tolower(name[i]);
		}
		i++;
	}

	puts(name);
	getch();
}