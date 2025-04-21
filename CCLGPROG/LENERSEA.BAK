#include<stdio.h>
#include<conio.h>

void main()
{
	int flag=0, n,a[20],i,key=0;
	char  ch;
	clrscr();

	printf("\n\n\t Enter size of Arry =>");
	scanf("%d",&n);

	// read

	for(i=0; i<n; i++)
	{
		printf("\n\n\t ENter number %d =>",i+1);
		scanf("%d",&a[i]);
	}

	do
	{
	for(i = 0; i<n; i++)
	{
		printf("\n  a[%d] = %d",i+1,a[i]);
	}

	printf("\n\n\t Enter number you want to search =>");
	scanf("%d",&key);

	for(i=0; i<n; i++)
	{
		if( a[i] == key )
		{
			flag = 1;
			printf("\n\n\t %d Element found at position %d ",key,i+1);

		}
	}

	if(flag == 0)
	{
		printf("\n\n\t %d not found ",key);
	}

	printf("\n\n\t do u want to continue =>");
  //	gets(ch);
   //	scanf(" %c",&ch);
	// flushall();
       //	 ch = getchar();
	 scanf(" %c",&ch);

	}while(ch == 'Y' || ch == 'y');

	getch();
}