#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,j,k=0;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	for(i=0; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j*j);
		}
	printf("\n");
	}

	getch();
}