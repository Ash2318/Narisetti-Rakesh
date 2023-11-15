#include<stdio.h>
main()
{
	int a=2, b=4;  // 2=00000010 and 4=00000100
	printf("a&b=%d",a&b);
	printf("\na|b=%d",a|b);
	printf("\na^b=%d",a^b);
	printf("\n~a=%d",~a);
	printf("\na<<1 =%d",a<<1);
	printf("\na>>1 =%d\v",a>>1);
	(a&b)? (printf("true")):(printf("false"));
}
