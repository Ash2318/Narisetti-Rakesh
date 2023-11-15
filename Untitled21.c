#include<stdio.h>
main()
{
	int a=125,b=12345;
	long ax=1234567890;
	short s= 4043;
	float x= 2.13459;
	double dx=1.1415927;
	char c='w';
	unsigned long ux=2541567890;
	printf("%d",a+c);
	printf("\n%f+%c",x,c);
	printf("\n%lf+%f",dx,x);
	printf("\n%d+%ld",dx,ax);
	printf("\n%d+%f",a,x);
	printf("\n%d+%d",s,b);
	printf("\n%ld+%d",ax,b);
	printf("\n%d+%c",s,c);
	printf("%ld+%c",a,c);
	printf("\n%ld+%u",ax,ux);
	
	
	 
	
	
	
}
