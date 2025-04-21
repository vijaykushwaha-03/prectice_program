#include<stdio.h>
#include<conio.h>

void main()
{
	char name[30],ch[20];
	int n,i,flag = 0;

	clrscr();

	printf("\n\n\t Enter size of arr =>");
	scanf("%d",&n);

	// read

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter name %d =>",i+1);
		scanf(" %s",name[i]);
	}
	//write
	for(i=0; i<n; i++)
	{
		printf(" \n %s",name[i]);

	}

	printf("\n\n\t Enter name you search =>");
	scanf(" %s",ch);

	for(i=0; i<n; i++)
	{
		if (  stricmp(ch,name[i]) == 0 )
		{
			flag = 1 ;
			printf("\n\n\t %s found at %d position ",ch,i+1);
			break;
		}
	}


	if(flag == 0)
		{
			printf("\n\n\t not found ");

		}
	getch();
}