#include<stdio.h>
main()
{
	int a[10],smallest;
	int i,a1,n,sum1=0,sum2=0;
	printf("enterr the value of n :");
	scanf("%d",&n);
    for(a1=0;a1<n;a1++)
    {
    	printf("\nenter the value of given a[%d] :",a1+1);
    	scanf("%d",&a[a1]);
	}
	printf("THE VALUES ARE\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		printf("even:%d=",i+1);
		printf("%d\n",a[i]);
		sum1=sum1+a[i];
		
	}
	else
	{
			printf("odd:%d=",i+1);
		printf("%d\n",a[i]);
		sum2=sum2+a[i];
	}
	}
	printf("sum even :%d\n sum odd :%d",sum1,sum2);
	smallest=a[0];
}
