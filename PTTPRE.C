
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,k=1,a,flag = 0;

	clrscr();

	printf("\n\n\t Enter number =>");
	scanf("%d",&n);

	 /*
	  // normal

	for (i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("* ");
		}
	printf("\n");
	}
	  // revers

	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
	printf("\n");
	}
	 */
	/*
	 for(i=0; i<n; i++)
	 {
		for(j=0; j<i; j++)
		{
			printf(" %d ",k);
			k++;
		}
	 printf("\n");
	 }
	  */
	  /*
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
				printf("%d",i);
			}
		}
	  printf("\n");

	  } */
	  /*
	  for(i=1; i<=n; i++)
	  {
		 a=65;

		if(i%2 == 0)
		{
			for(j=1; j<=i; j++)
			{
				printf("%c",a);
				a++;
			}
		}
		else
		{
			for(j=1; j<=i; j++)
			{
				printf("%d",j);
			}
		}
	  printf("\n");
	  }
	*/
	  /*

	  for(i=1; i<=n; i++)
	  {
		for(j=i; j<=n; j++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
	  printf("\n");
	  }
	    */
		/*
	    for(i=1; i<=n; i++)
	    {
		for(j=i; j<=n; j++)
		{
			printf("*");
		}
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		for(j=i; j<=n; j++)
		{
			printf("*");
		}
		printf("\n");
	    } */
		    /*
	    for(i=1; i<=n; i++)
	    {
		for(j=1; j<=i; j++) //pt2
		{
			printf("*");
		}
		for(j=i; j<=n; j++)
		{
			printf(" ");
		}

		for(j=1; j<=n; j++)
		{
			if(i+j <=n)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	    }     */


	    for(i=1; i<=n; i++)
	    {
		      //	flag = 0;
	    for(j=1; j<=i; j++)
		{

			if(flag == 0)
			{
				printf("1");
				flag = 1;
			}
			else
			{
				printf("0");
				flag = 0;
			}
		 }
		for(j=1; j<=i; j++)
		{
		      if(i%2 == 0)
		      {
			if(flag == 0)
			{
				printf("0");
				flag = 1;
			}
			else
			{
				printf("1");
				flag = 0;
			}
		      }
		  }

	    printf("\n");
	   }

	getch();
}