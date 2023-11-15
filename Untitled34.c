#include<stdio.h>
main()
{
	int n,i=0,sum=0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		printf("%d+%d=%d\n",sum-i,i,sum);
		i++;
		
	}
	
}
