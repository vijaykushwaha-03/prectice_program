//structure
#include<stdio.h>
#include<conio.h>

struct book
{
 int qty,price,totalp;
 char name[20],title[20];

} b1,b2,b3;

void main()
{

	clrscr();

	printf("\n\tenter book1 name==>");
	scanf("%s",b1.name);

	printf("\n\tenter book1 title==>");
	scanf("%s",b1.title);

	printf("\n\tenter book1 price==>");
	scanf("%d",&b1.price);

	printf("\n\tenter book1 quatity==>");
	scanf("%d",&b1.qty);


	printf("\n\tenter book2 name==>");
	scanf("%s",b2.name);

	printf("\n\tenter book2 title==>");
	scanf("%s",b2.title);

	printf("\n\tenter book2 price==>");
	scanf("%d",&b2.price);

	printf("\n\tenter book2 quatity==>");
	scanf("%d",&b2.qty);



	printf("\n\tenter book3 name==>");
	scanf("%s",b3.name);

	printf("\n\tenter book3 title==>");
	scanf("%s",b3.title);

	printf("\n\tenter book3 price==>");
	scanf("%d",&b3.price);

	printf("\n\tenter book3 quatity==>");
	scanf("%d",&b3.qty);



	b1.totalp = b1.qty * b1.price;
	b2.totalp = b2.qty * b2.price;
	b3.totalp = b3.qty * b3.price;

       printf("\n\tits books information........");
       printf("\n\t-------------------------------------------");
       printf("\n\tname\ttitle\tprice\tqty\ttotalp");
       printf("\n\t-------------------------------------------");

       printf("\n\t%s\t%s\t%d\t%d\t%d",b1.name,b1.title,b1.price,b1.qty,b1.totalp);
       printf("\n\t%s\t%s\t%d\t%d\t%d",b2.name,b2.title,b2.price,b2.qty,b2.totalp);
       printf("\n\t%s\t%s\t%d\t%d\t%d",b3.name,b3.title,b3.price,b3.qty,b3.totalp);

getch();
}