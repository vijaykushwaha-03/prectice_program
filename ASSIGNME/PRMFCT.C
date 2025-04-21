#include<stdio.h>
#include<conio.h>

int factor(int num)
{
	int i,j,isprime,count = 0;

	for(i=2; i<num; i++)
	{
		if(num%i == 0)
		{
		      //	return 1;
			isprime = 1;

			for(j=2; i<=i/2; j++)
			{
				if(i%j == 0)
				{
				     //	return 0;
					isprime = 0;
					break;
				}
			}

			if(isprime == 1)
			{
				printf(" %d ",i);
				count++;
			}
		}
	}
	return count;

}




void main()
{
	int num,count;

	clrscr() ;

	printf("Enter Number =>");
	scanf("%d",&num);

	count = factor(num);

	printf("\n Total Prime factor is => %d",count);

	getch();
}