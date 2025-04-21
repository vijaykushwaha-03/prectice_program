#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("Enter Three Numbers => ");
	scanf("%d-%d-%d",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
		{
			printf(" %d a is bigger",a);
		}
		else
		{
			printf("%d c is bigger",c);
		}
	}
	if(b>a)
	{
	      if(b>c)
	      {
		printf("%d b is bigger",b);
	      }
	      else
	      {
		printf("%d c is bigger",c);
	      }
	}

	getch();
}