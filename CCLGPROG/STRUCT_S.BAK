#include<stdio.h>
#include<conio.h>

struct student
{
	int roll,m1,m2,m3,tt;
	char name[20];
}stu;

void main()
{
	clrscr();

	// read

	printf("\n\n\t Enter student name =>");
	gets(stu.name);

	printf("\n\n\t Enter roll no =>");
	scanf("%d",&stu.roll);

	printf("\n\n\t Enter Marks-1 =>");
	scanf("%d",&stu.m1);

	printf("\n\n\t Enter Marks-2 =>");
	scanf("%d",&stu.m2);

	printf("\n\n\t Enter Marks-3 =>");
	scanf("%d",&stu.m3);

	stu.tt = stu.m1 + stu.m2 + stu.m3;

	printf("\n\n\t Student Information....");
	printf("\n\t-------------------------------");

	printf("\n\t NAME\t Rollno\t MARKS-1  MARKS-2 MARKS-3  Total");
	printf("\n\t %s\t   %d\t   %d\t   %d\t   %d\t   %d",stu.name,stu.roll,stu.m1,stu.m2,stu.m3,stu.tt);

	getch();
}