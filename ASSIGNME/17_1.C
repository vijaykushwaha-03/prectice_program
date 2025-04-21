#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,max = 0;

	clrscr();
	// read
	for(i=0; i<10; i++)
	{
		printf("\n\n\t Enter student %d  marks =>",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0; i<=10; i++)
	{
		if ( a[i] > max )
		{
			max = a[i];
		}
	}
	printf("\n\n\t Maximum number is => %d",max);

	getch();
}