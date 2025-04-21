#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;

	clrscr();

	printf("Enter Three Number =>");
	scanf("%d %d %d",&a,&b,&c);

	if( (a<b) && (a<c) )
	{
		if(b<c)
		{
		 printf(" %d %d %d ",a,b,c);
		 }
		 else
		 {
		 printf(" %d %d %d ",a,c,b);
		 }
	}
	else if( (b<a) &&(b<c) )
	{
		if(c<a)
		{
		printf("%d %d %d ",b,c,a);
		}
		else
		{
		printf(" %d %d %d ",b,a,c);
		}
	}
	else if ( (c<a) && (c<b) )
	{
		if(b<a)
		{
		printf("%d %d %d ",c,b,a);
		}
		else
		{
		printf("%d %d %d ",c,a,b);
		}
	}





	getch();
}