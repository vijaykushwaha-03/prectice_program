#include<stdio.h>
#include<conio.h>

void main()
{
	char name[20][30],key;
	int i,n,flag=0;

	clrscr();

	printf("\n\n\t Enter size of name ");
	scanf("%d",&n);


	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter name =>");
		scanf("%s",name[i]);
	}

	  // PRINT
	 clrscr();

	for(i=0; i<n; i++)
	{
		printf("\n\n\t %s ",name[i]);
	}

	printf("\n\n\t Enter name u want to search ");
	scanf("%s",key);

	for(i=0; i<n; i++)
	{
		if ( stricmp(name[i],key) == 0)
		{
			flag = 1;
			printf("\n\n\t %s FOUND At Position %d ",key,i+1);

			break;
		}
	}

	if(flag == 0 )
	{
		printf("\n\n\t not found ");
	}
	
	getch();
}