#include<stdio.h>
main()
{
	int a=3,b=5,c;
	printf("a unary operator=%d",a);
	printf("\nb unary operator=%d",b);
	c= a++ + b;
	printf("\n%d is b value",b);
	printf("\n%d is a value",a);
	printf("\n%d is c value",c);
}
