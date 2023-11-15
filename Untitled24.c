#include<stdio.h>
main()
{
	int x=3,y=5;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x=%d\ny=%d",x,y);
}
