#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s1[20];
	char s2[20]={" LPU"};
	char  s[20]={"lpu is the best"};
	char s3[20]={"lPU is the best"};
	char str1[20]="HeLLO";
	char str2[20]="HelLO";
	char str[10]="2a3457";
	printf("%ld\n",atoi(str));    //string to integer atoi
	int i=strncmp(str1,str2,1);
	//strcpy(s1,s2);
	//strncpy(s1,s2,2);
	//strncat(s,s2,2);
	printf("%d",i);	
	printf("\n%d",strlen(s));
	printf("\n%s",strrev(s));
	printf("\n%s",strupr(s3));
	printf("\n%s",strlwr(s2));
}
/* camparision of s1   s2
s1=s2==0
s1>s2==1
s1<s2==-1*/
