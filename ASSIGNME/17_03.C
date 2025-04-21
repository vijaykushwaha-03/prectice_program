#include<stdio.h>
#include<conio.h>

void main()
{
	int i, roll[20],m1[20],m2[20],tt[20],n;

	clrscr();

	printf("\n\n\t Enter student u want =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter student %d rollno =>",i+1);
		scanf("%d",&roll[i]);

		printf("\n\n\t Enter Student %d Mark-1 =>",i+1);
		scanf("%d",&m1[i]);

		printf("\n\n\t Enter Student %d Mark-2 =>",i+1);
		scanf("%d",&m2[i]);

		tt[i] = m1[i] + m2[i];
	}

	printf("\n\n\t Student detail...");
	printf("\n\t--------------------------");
	printf("\n\t Rollno\tMark-1\tMark-2\tTotal[200]");

	for(i=0; i<n; i++)
	{
		printf("\n\t %d\t %d\t  %d \t  %d",roll[i],m1[i],m2[i],tt[i]);
	}

	getch();
}