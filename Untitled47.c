#include<stdio.h>
int sum1(int);
main()
{
	int  i=10;
	printf("sum=%d",sum1(i));
	
}
int sum1(int n)
{
	if(n==0)
	return n;
	else
	return n+sum1(n-1);
}
