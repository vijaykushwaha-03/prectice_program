#include<stdio.h>
#include<conio.h>

typedef struct student
{
	int roll;
	char name[20];

	struct dob
	{
		int dd,mm,yy;
	}d;
}stu;

void main()
{
	stu s[20];
	int i,n;

	clrscr();

	printf("\n\n\t Enter size of student");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("\n\n\t Enter roll no =>");
		scanf("%d",&s[i].roll);

		printf("\n\n\t Enter name =>");
		flushall();
		gets(s[i].name);

		printf("\n\n\t Enter DOB in [ dd-mm-yyyy ] =>");
		scanf("%d-%d-%d",&s[i].d.dd,&s[i].d.mm,&s[i].d.yy);
	 }

	 printf("\n\n\t Tabuler form");
	 printf("\n\t-------------------------");

	 printf("\n\t NAME \t Roll \t DD-MM-YYYY");
	 printf("\n\t----------------------------");
	 for(i=0; i<n; i++)
	 {
		printf("\n\t %s \t %d \t %d-%d-%d",s[i].name,s[i].roll,s[i].d.dd,s[i].d.mm,s[i].d.yy);
	 }

	getch();
}
