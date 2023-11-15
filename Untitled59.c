#include<stdio.h>
main()
{
	int a[5]={1,2,4,5,8};
//
	int n=5,i=0,index=3,value=9;
	printf("show th4 elements\n:");
	for(i;i<n;i++)
	{
		printf("%d",a[i]);
		
	}
	for(i=3;i<n;i++)
	{
		a[i-1]=a[i];
	}

	printf("\vshow th4 elements\n:");
n--;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		
	}
}
