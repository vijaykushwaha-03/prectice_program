#include<stdio.h>
#include<conio.h>

void main()
{
	char name[20],tmp;
	int i,j,n,len;

	clrscr();

	printf("\n\n\t Enter string ");
	gets(name);
	puts(name);
	len = strlen(name);

	for(i=0; i<len; i++)
	{
		for(j= i+1; j<len; j++)
		{
			if(name[i] > name[j] )
			{
			     tmp = name[i];
			     name[i] = name[j];
			     name[j] = tmp;
			}
		}
	}

	puts(name);
	getch();
}