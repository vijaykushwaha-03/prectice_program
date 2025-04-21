#include<stdio.h>
#include<conio.h>

int power(int c,int j)
{
	int i,p=1;
	for(i=1; i<=j; i++)
	{
		p = p* c;
	}
	return p;
}

int prime(int n)
{
	int f=0,i;
	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			f++;
		}
	}
	if(f == 2)
		return 1;
	else
		return 0;
}

int digitcount(int n)
{
	int c=0;
	while(n!=0)
	{
		c++;
		n = n/10;
	}
	return c;
}

int main()
{
	int p,p1,num,j=1,rem,temp,c,sum,f=0;

	clrscr();

	printf("\n Enter Number =>");
	scanf("%d",&num);

	c = digitcount(num);
	while(c!= 0)
	{
		temp = num;
		c--;
		p = power(10,c);
		p1 = power(10,j);
		rem = temp%p1;
		temp = temp/p1;
		sum = rem*p+temp;
		printf("%d\n",sum);
		j++;
		if(prime(sum) !=1)
		{
			f = 1;
		}
	}
	if(f == 0)
	{
		printf("\n\t %d is  circuler prime number ",num);
	}
	else
	{
		printf("\n\t %d is not circuler prime number",num);
	}

	getch();
}