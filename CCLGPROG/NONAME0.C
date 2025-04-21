#include<stdio.h>
#include<conio.h>

void main()
{
	long int basic_sal;
	float da,hra,pf;
	double gros_sal;

	clrscr();

	printf("Enter Basic salary =>");
	scanf("ld",&basic_sal);

	if(basic_sal< 5000)
	{
		da = dasic_sal * 0.30;
	}
	else
	{
		da = basic_sal * 0.45
	}

	hra = basic_sal * 0.15;
	pf = basic_sal * 0.12;

	gros_sal  = basic_sal + hra +da - pf;

	printf("Gross  salary is => ",gros_sal);

	getch();

}