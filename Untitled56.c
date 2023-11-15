// Pass by entire array
// and element by element
#include<stdio.h>
void ref1(int); // or can be written(int a[],int size)
main()
{
	int a[6]={1,2,3,4,5},size=5;
	ref1(a[0]);
	printf("\nOK");
}
void ref1(int x)
{
	
	printf("%d\t",x);
	return;
}
