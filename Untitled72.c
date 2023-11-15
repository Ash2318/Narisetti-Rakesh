#include<stdio.h>
#include<string.h>
struct book
{                                             //fflush(stdin) to get rid of buffer
	char bname[30];
	int page;
	float price;
	
};
/*main()
{
	struct book mybook[100];
	int i,n;
	n=3;//number of records
	i=1;
	while(i<=n)
	{
		printf("enter the book %d\n",i);
		gets(mybook[i].bname);
		fflush(stdin);
		scanf("%d",&mybook[i].page);
		fflush(stdin);
		scanf("%f",&mybook[i].price);
		fflush(stdin);
		printf("book %d:\tname:%s\n\tpage:%d\n\tprice:%f\n",i,mybook[i].bname,mybook[i].page,mybook[i].price);
		i++;
	}
}*/
main()
{
	struct book mybook={"abc",20};
	struct book *bptr;
	bptr=&mybook;
	printf("bookname:%s\nbook pages:%d",(*bptr).bname,(*bptr).page);
	
	printf("\nbookname:%s\nbook pages:%d",bptr->bname,bptr->page);
}
