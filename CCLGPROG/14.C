//

#include<stdio.h>
#include<conio.h>

void main()
{
	int pay_rate,hour_work,pay_week;
	clrscr();

	printf(" Enter  Hourly pay  Rate => ");
	scanf("%d",&pay_rate);

	printf(" Enter Number of Hours Worked by Workers => ");
	scanf("%d",&hour_work);

	pay_week = pay_rate * hour_work;

	printf(" The worker pay for week is => %d",pay_week);

	getch();
}