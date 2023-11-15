#include<stdio.h>
main()
{
	int a=5,b=5,c=12,d,e,f;
	d = (a==b)&&(c>b);
	e = (a==b)||(c<b);
	f = !(a==b);
	printf("(a==b)||(c<b)=%d",e);
	printf("\n!(a==b)=%d",f);
	printf("\n(a==b)&&(c>b)=%d",d);
}
