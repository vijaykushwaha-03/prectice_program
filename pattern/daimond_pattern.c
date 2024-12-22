// Online C compiler to run C program online
#include <stdio.h>

void main()
{
	int i,j,n;
 

	printf("\n\n\t Enter Number => ");
	scanf("%d",&n); //

	for(i=1; i<n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i+j <= n)
			{
				printf(" ");
			}
			else
			{
				printf(" *");
			}
		}
	    printf("\n");
	}
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=n; j++)
		{
			if(i+j <= n)
			{
				printf(" ");
			}
			else
			{
				printf(" *");
			}
		}
    	printf("\n");
	}

}