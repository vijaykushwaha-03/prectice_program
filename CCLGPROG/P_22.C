// hourse minutes and second

#include<stdio.h>
#include<conio.h>

void main()
{
	long int  Hou,Min,tmp,total_sec,rem_sec;
	clrscr();

	printf("\n\n\t Enter Total second => ");
	scanf("%ld",&total_sec);

	tmp = total_sec;

	Hou = total_sec/3600;
	total_sec = total_sec%3600;
	Min = total_sec / 60;
	rem_sec = total_sec % 60;

	printf("\n\n\t %ld total second ==> %ld Houres %ld Minutes nad %ld seconds",tmp,Hou,Min,rem_sec);

	getch();
}