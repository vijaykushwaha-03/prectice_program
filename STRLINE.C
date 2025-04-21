#include<stdio.h>
#include<conio.h>

void main()
{
	char st[30][50],key[20];
	int i,n,flag = 0;

	clrscr();

	printf("\n\n\t Enter size of arr =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n Enter name %d =>",i+1);
		flushall();
		gets(st[i]);
	}
	for(i=0; i<n; i++)
	{
	printf("\n %s",st[i]);
	}

	printf("\n\n\t Enter string u want to search =>");
	gets(key);

	   for(i=0; i<n; i++)
	   {
		if(stricmp(st[i],key) == 0 )
		{
			flag = 1;
			printf("\n\n\t found");
			break;
		}

	    }

	    if(flag == 0)
	    {
		printf("\n\n\t Not found");
	    }
	getch();
}