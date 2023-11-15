#include<stdio.h>
main()
{
	typedef int abc; //typedef is uded to declare keywords with variable other than itself
	abc a,b;
	printf("enter u r age:  ");
	scanf("%d",&a);
	(a>18)? (printf("you can vote")):(printf("sorry kid"));
	
	
}
