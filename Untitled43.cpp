//with return type and with parameters
#include<stdio.h>
int sum(int,int);
main()
{
	int c1,c2,c;
	c1=sum(2,1);
	c2=sum(3,1);
	c=sum(4,1);
	printf("\n%d",c1);
	printf("\n%d",c2);
	printf("\n%d",c);
	
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
	
	
}
