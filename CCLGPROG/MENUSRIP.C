#include<stdio.h>
#include<conio.h>

void main()
{
	int choice, no,i,flag,  rem,sum,tmp,  rev;
	char ch;

	do
	{
		clrscr();

		printf("\n\t 1.prime no");
		printf("\n\t 2.sum of digit");
		printf("\n\t 3.Amstrong");
		printf("\n\t 4.Revers");
		printf("\n\t 5.Palindrom");
		printf("\n\t 0.Exit");

		printf("\n\n\t Enter Your choice =>");
		scanf("%d",&choice);

		switch(choice)
		{
			case 0:
				exit(0);

			case 1:
				printf("\n\n\t Enter Number =>");
				scanf("%d",&no);
				flag = 0;

				for(i=2; i<=no/2; i++)
				{
					if(no%i==0)
					{
						flag = 1;
						printf("\n\n\t %d is not prime",no);
						break;
					}
				}
				if(flag == 0)
				{
					printf("\n\n\t %d Number is Prime ",no);
				}

				break;

			case 2:
				printf("\n\n\t Enter Number =>");
				scanf("%d",&no);
				sum=0;

				while( no>0 )
				{
					rem = no%10;
					printf(" %d +",rem);
					sum = sum + rem;
					no = no/10;
				}

				printf("\n\n\t Sum of Digits is => %d",sum);

				break;

			 case 3:
				sum = 0, tmp =0;
				printf("\n\n\t Enter Number =>");
				scanf("%d",&no);
				tmp = no;

				while( no>0 )
				{
					rem = no%10;
					printf("%d +",rem*rem*rem);
					sum = sum +(rem*rem*rem);
					no = no/10;
				}

				printf("\n\n\t sum is %d",sum);

				if(tmp==sum)
				{
					printf("\n\n\t %d is Amstrong Numner ",tmp);
				}
				else
				{
					printf("\n\n\t %d is Not Amsyrong Number",tmp);
				}

				break;

			 case 4:
				printf("\n\n\t Enter Number =>");
				scanf("%d",&no);
				rev = 0,tmp=0;
				tmp = no;

				while( no>0 )
				{
					rem = no%10;
					rev = (rev*10)+rem;
					no = no/10;
				}
				printf("\n\n\t Revers of %d is %d ",tmp,rev);

				break;

			 case 5:
				printf("\n\n\t Enter Number =>");
				scanf("%d",&no);
				rev = 0,tmp=0;
				tmp = no;

				while( no>0 )
				{
					rem = no%10;
					rev = (rev*10)+rem;
					no = no/10;
				}
				printf("\n\n\t Revers of %d is %d ",tmp,rev);

				if(tmp==rev)
				{
					printf("\n\n\t %d is Palindrom..",tmp);
				}
				else
				{
					printf("\n\n\t %d is Not Palindrom..",tmp);
				}

			default:
				printf("\n\n\t please enter between [1 to 5]");

		}

		printf("\n\n\t Do you wann Still continue [ Y/N ]=>");
		flushall();
		ch=getchar();

	} while(ch=='Y' || ch=='y');

	getch();
}