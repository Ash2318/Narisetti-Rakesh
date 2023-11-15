#include<stdio.h>
main()
{
	int var=10;
	int **p1;
	int *p2;
	p2=&var;
	p1=&p2;
	printf("var=%d\n",var);
	printf("p1=%d\v",**p1);
	printf("p2=%d",*p2);
	printf("\n%d",*p1);

