#include<stdio.h>
main()
{
	int c;
	float k=2.9;
	char ch='pukthik';
	double dd=9.9647;
	printf("%d,\n%f,\n%c",c,k,ch);
	printf("\n%lf",dd);
	char str[10] = "pukthik";
	printf("\t\t\t\t\t\t%s",str);
	char str1[]={'p','u','k'};
	printf("\n%s",str1);
	long int numb=1234567890;
	short int numb1=10;
	printf("\n%ld\n%hd\n",numb,numb1);
	unsigned un=90;
	printf("%u",un);
}
