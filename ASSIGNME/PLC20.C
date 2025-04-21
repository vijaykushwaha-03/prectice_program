#include<stdio.h>
#include<conio.h>

int dmy(int day)
{
	    int yr,mon,rmd;

	yr = day/365;
	day = day%365;
	mon = day/30;
	rmd = day%30;

	printf("%d %d %d",yr,mon,rmd);

   //	return (yr,mon,rmd);

}

void main()
{
	int day,mon,yr,rmd;
	clrscr();

	printf("\n Enter Number of days =>");
	scanf("%d",&day);

      //	printf(" %d %d %d",dmy(day,mon,yr,rmd));

      dmy(day);

	getch();
}