//sum of the numbers entered in an array
#include<stdio.h>
main()
{
	int a[10],sum=0;
	int i,a1,n;
	printf("enterr the value of n :");
	scanf("%d",&n);
    for(a1=0;a1<n;a1++)
    {
    	printf("\nenter the value of given a[%d] :",a1+1);
    	scanf("%d",&a[a1]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum = %d",sum);
	
}
