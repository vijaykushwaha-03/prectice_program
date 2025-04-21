#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],cnt = 0;

	clrscr();

	for(i=0; i<10; i++)
	{
		printf("\n Enter %d =>",i+1);
	       scanf("%d",&a[i]);

	       if( a[i] > 40 && a[i] < 80 )
	       {
		cnt ++;
		}

	}
	printf("\n\n\t %d student secured markes above 80 and below 40 ", cnt);
	getch();
}