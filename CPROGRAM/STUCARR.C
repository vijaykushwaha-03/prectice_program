#include<stdio.h>
#include<conio.h>

struct stud
{
	char name[20];
	int m1,m2,tt;
} ;

void main()
{
	struct stud s[20] ;
	int n,i;
	clrscr();

	printf("\n\n\t Enter size of stu =>");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
	printf("\n\n\t Enter name =>");
	flushall();
	gets(s[i].name);

	printf("\n\n\t Enter m1 =>");
	scanf("%d",&s[i].m1);

	printf("\n\n\t Enter m2 =>");
	scanf("%d",&s[i].m2);

	s[i].tt = s[i].m1 + s[i].m2;
	}
	printf("\n\n\t Student info ");
	printf("\n\t ----------------------------");
	printf("\n\t Name\tMar-1\tMar-2\t Total");
	for(i=0; i<n; i++)
	{
	printf("\n\t %s\t%d\t%d\t%d",s[i].name,s[i].m1,s[i].m2,s[i].tt);
	}
	getch();
}