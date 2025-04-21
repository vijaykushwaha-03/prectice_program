#include<stdio.h>
#include<conio.h>

void main()
{
	long int basic_sal;
	float da,hra,pf;
	double gros_sal;

	clrscr();

	printf("\n\n\n\t Enter Basic salary =>");
	scanf("%ld",&basic_sal);

	if(basic_sal< 5000)
	{
		da = basic_sal * 0.30;
	}
	else
	{
		da = basic_sal * 0.45 ;
	}

	hra = basic_sal * 0.15;
	pf = basic_sal * 0.12;

	gros_sal  = basic_sal + hra +da - pf;

	printf("\n\n\t PF is => %.2f",pf);
	printf(" \n\n\t DA is => %.2f",da);
	printf("\n\n\t HRA is => %.2f",hra);
	printf("\n\n\t Gross  salary is => %.2lf",gros_sal);

	getch();

}