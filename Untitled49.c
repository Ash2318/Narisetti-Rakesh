#include<stdio.h>
extern int a=10;
main()
{
	printf("\n-showing extern variable a= %d",a);
	{
		//int a=9;
		printf("\vinside the block a= %d",a);
	}

	
}
