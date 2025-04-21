		//curd operation in array
#include<stdio.h>
#include<conio.h>

void insertarray(int a[],int n,int pos,int val)
{
	int i;
	n++;

	for(i=n-1;i>pos;i--)
	{
		 a[i] = a[i-1];
	}
	a[pos - 1 ] = val;
	printf("\n\tarray after insertion..");

	for(i=0;i<n-1;i++)
	{
		printf(" %d " ,a[i]);
	}
}


void deletearray()
{

}

void updatearray()
{                                                     ////////////

}

void searcharray()
{

}

void main()
{
	int ch,a[10],n,pos,val,i,index,ser;
	clrscr();
	printf("\n\tenter size of array");
	scanf("%d",&n);
	printf("\n\tenter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}

	do
	{
	printf("\n\tenter curd opration menu..");
	printf("\n\t1.insert value..");
	printf("\n\t2.delete value ..");
	printf("\n\t.3.update value..");
	printf("\n\t4.search value ..");
	printf("\n\t5.exit..");
		printf("\n\tenter choice==>");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	//insertarray
				printf("\n\tenter positon==>");
				scanf("%d",&pos);
				printf("\n\tenter value==>");
				scanf("%d",&val);
				insertarray(a,n,pos,val);
			break;

			case 2:	//deletearray
				deletearray();
			break;

			case 3:	//updatearray
				updatearray();
			break;

			case 4:	//searcharray
				searcharray();
			break;

			case 5:	//exit
				exit(0);
			break;

			default:
				printf("\n\twrong choice..");
		}
	}while(ch>0);
	getch();
}