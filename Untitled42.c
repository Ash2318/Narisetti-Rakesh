//with return type and no parameters
#include<stdio.h>
int sum();
main()
{
	int c;
	c=sum();
	c=sum();
	c=sum();
	printf("\n%d",c);
	printf("\n%d",c);
	printf("\n%d",c);
	
}
int sum()
{
	int x=5,y=10,z;
	z=x+y;
	return 'B';
	
	
}
