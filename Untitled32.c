#include<stdio.h>
main()
{
	int a,b,c,x;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("\nenter the value of b :");
	scanf("%d",&b);
	printf("\nenter the value of c :");
	scanf("%d",&c);
	x=a+b+c;
	if(x>1 && x<200)
	{
		printf("rank 1");
	}
	if(x>201 && x<300)
	{
		printf("rank 2");
		}	
}
