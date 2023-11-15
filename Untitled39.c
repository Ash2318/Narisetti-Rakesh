#include<stdio.h>
sum1(); //declare
main()
{
	
   sum1(  );	//calling function
   sum1( );
   sum1( );
}
sum1() // definition
{
   int a,b,c;
   printf("\nenter the value a :");
   scanf("%d",&a);
   printf("\nenter the value b :");
   scanf("%d",&b);
   c=a+b;
   printf("\n %d",c);	
}
