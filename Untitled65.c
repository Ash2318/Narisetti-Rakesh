//passing pointer to 1d array
#include<stdio.h>
main()
{
	int a[5],*ptr,i=0;
	ptr=a; //or ptr=&a[0]
	printf("enter the elemts");
	while(i<5)
	{
		scanf("%d",(ptr+i));
		i++;
	}
	i=0;
	while(i<5)
	{
		printf("a[%d]=%d\n",i,*(ptr+i));
		i++;
	}
	
}
