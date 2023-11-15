//pointers
#include<stdio.h>
main()
{
	int a;
	
	int *ptr;
	ptr= &a;                                            // pointer holds the address
	*ptr=9;
	printf("enter the value of a:");
	scanf("%d",ptr);
	
	printf("\n%d\v",a);
	printf("%u\v",&a);
	printf("%u\n",ptr);
	printf("%d",*ptr); // the refrencing
	printf("\n%d",&ptr);
	
}
