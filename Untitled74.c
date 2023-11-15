#include<stdio.h>
#include<string.h>
union student 
{
	char name[20];
	int rollno,age;
	
}s1;
struct teacher 
{
	char name[20];
	int rollno,age;
	
}s2;
/*main()
{
	strcpy(s1.name,"abc");
	s1.rollno=555;
	printf("%s",s1.name);
	
	printf("\n%d",s1.rollno);
}*/
main()
{
	strcpy(s2.name,"abc");
	s2.rollno=555;
	strcpy(s1.name,"abc");
	s1.rollno=555;
	printf("size of U=%d",sizeof(s1));
	printf("\nsize ofS=%d",sizeof(s2));
}
