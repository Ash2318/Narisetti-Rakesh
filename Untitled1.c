#include <stdio.h>
#include<string.h>
main()
{
	char str[20]="I am a student\0";
	int i,a;
	i=0;
	while(str[i]!='\0')
	{
		a=a+1;
		i++;
	}
	printf("a=%d",a);

}


