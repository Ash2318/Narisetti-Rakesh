#include<stdio.h>
sum1(int,int);//formal arguements
multiply( int,int);
main()
{
	sum1(2,3);//actual arguements /parameters
	sum1(5,6);
	sum1(100,200);
	multiply(2,3);//actual arguements /parameters
	multiply(5,6);
	multiply(100,200);
	
	
	
}
sum1(int x,int y)
{
	printf("\n%d",x+y);
}
multiply(int u,int v)
{
	printf("\n multiplication is %d",u*v);
}

