#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,n,j,len;
	char str[50];
	char temp;

	clrscr();
	printf("\n\tEnter the string==>");
	gets(str);

	len=strlen(str);
	printf("\n\tBefore shorting string==>");
	puts(str);

	for(i=1; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(str[i] > str[j])
			{
			 temp = str[i];
			 str[i] = str[j];
			 str[j] = temp;
			}
		}
	}

	printf("\n\tEnter After shorting %s",str);


	getch();

}