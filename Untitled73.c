#include<stdio.h>
#include<string.h>
/*struct student
{
	char name[20];
	int no;
	float marks[4];		
};
main()
{
	int i;
	struct student s1={"abc",1,{90,91,92,93}};
	struct student *s;
	s=&s1;
	printf("name=%s\nid=%d\n",s->name,s->no);
	for(i=0;i<4;i++)
	{
		printf("marks of subject %d=%f\n",i+1,s->marks[i]);
		}	
}*/

struct student
{
	char name[20];
	int regno;
	//struct result r1;    //nesting
	/*struct result
{
	float marks;
	
}r1;*/
}s1;
main()
{
struct student s1
	//s1.r1.marks=90;
//	printf("%d\n%f",s1.regno,s1.r1.marks);
	printf("%d\n",s1.regno);
	printf("%s",s1.name);
		printf("\v%d",sizeof(s1));
}
