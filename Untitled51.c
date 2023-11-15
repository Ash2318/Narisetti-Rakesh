#include<stdio.h>
main()
{
	int a[10];
	int i,a1,n;
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
		printf("%d\n",a[i]);
	}
}
