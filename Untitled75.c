//Passing a structure as a parameter in function
#include<stdio.h>
#include<string.h>
struct student 
{

	int rollno,age;
	
}s1;
struct s fun(struct student  );
main()
{
	struct s s2;
	s1.age=10;
	s1.rollno=1;
	s2=fun(s1);
	printf("%d rollno."s2.rollno);
}
struct s fun(struct student a)
{
	struct s s8;
	printf("rollno.=%d",a.rollno);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nage=%d",a.age);
	s8.age=10;
	s8.rollno=12;
}

