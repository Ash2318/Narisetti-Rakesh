// parameters 1) call by value 2)call by reference
#include<stdio.h>
void swap(int*,int*); // Use of pointers(*) is to change the values permanently
main()
{
	int a,b;
	a=4;
	b=8;
	printf("a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\va=%d and b=%d",a,b);

}
void swap(int *a, int *b)
{
	int z;
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("\vvalues after modification a=%d and b=%d",*a,*b);
	
}
