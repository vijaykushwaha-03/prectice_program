#include<stdio.h>
#include<conio.h>

struct student
{
	char name[20];
	int m1,m2,tt;
	float avg;
};

void main()
{
	struct student stu[40];

	int i,n;
	clrscr();

	printf("\n\n\t Enter size of stu =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
	printf("\n\n\t Enter %dst name =>",i+1);
	flushall();
	gets(stu[i].name);

	printf("\n\n\t Enter Mark-1 =>");
	scanf("%d",&stu[i].m1);

	printf("\n\n\t Enter Mark-2 =>");
	scanf("%d",&stu[i].m2);

	stu[i].tt = stu[i].m1 + stu[i].m2;

	stu[i].avg = stu[i].tt / 2;
	}

	printf("\n\n\t Student info ");
	printf("\n--------------------------");
	printf("\n\n\t Name\tMark1\tmark2\total\tAVG");
	for(i=0; i<n; i++)
	{
	printf("\n\n\t %s\t %d\t %d\t %d\t %.2f\t",stu[i].name,stu[i].m1,stu[i].m2,stu[i].tt,stu[i].avg);
	}


	getch();
}