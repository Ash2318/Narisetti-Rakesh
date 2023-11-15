#include<stdio.h>
int fact1(int);
main()
{
	int n=5; //the number for factorial
	printf("factorial of n is %d",fact1(n));
	
}
int fact1(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact1(n-1);
}
