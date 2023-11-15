#include<stdio.h>
main()
{
	int x=10;
	char ch='A';
	void *ptr;
	ptr=&x;
	printf("the vaue at ptr %d",*(int*)ptr);
	ptr=&ch;
	printf("\nthe vaue at ptr %c",*(char*)ptr);
}
