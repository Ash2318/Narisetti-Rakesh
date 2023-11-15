#include<stdio.h>
int *p1,*p2,*p3,*p4;
int i=10,j=2;
int a[10]={10,20,30,20,5};
main()
{
	
	int m,n,x,y,z;
	p1=&i;
	p2=&j;
	p3=&a[1];
	p4=&a[3];
	m=*p4/(*p3);
	p3=n=p3+1;
	printf("%d\n",*p3);
	if(p4>p3)
	printf("ufuufuf");
	

	
}	
	


