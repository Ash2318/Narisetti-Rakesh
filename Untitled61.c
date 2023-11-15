#include<stdio.h>
main()
{
	double radius,area=0;
	double *pradius,*parea=&area;
	pradius=&radius;
	*pradius=5;
	printf("enter the value of radius:");
	scanf("%lf",pradius);
	*parea=3.14 *(*pradius)*(*pradius);
	printf("%lf",*parea);
	
	
}
