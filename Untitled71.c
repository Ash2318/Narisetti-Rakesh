#include<stdio.h>
#include<string.h>
 struct student
 {
 	char name[20];
 	int rollno;
 	float fee;
 };
 main()
 {
 	int a;
 	struct student s1,s2,s3;
 	/*s1.rollno=12;
 	s1.fee=20000;
 	strcpy(s1.name,"Aman");
 	s2.rollno=13;
 	s2.fee=30000;
 	strcpy(s2.name,"rudy");*/
 	/*gets(s1.name);
 	scanf("%d",&s1.rollno);
 	scanf("%f",&s1.fee);
 	printf("student1=\trollno=%d\n\t\tfee=%f\n\t\tName:%s",s1.rollno,s1.fee,s1.name);*/
 	//printf("\nstudent2=\trollno=%d\n\t\tfee=%f\n\t\tName:%s",s2.rollno,s2.fee,s2.name);
 	s3={13,6.5,"abc"};
     printf("\nstudent3=\trollno=%d\n\t\tfee=%f\n\t\tName:%s",s3.rollno,s3.fee,s3.name);
 }
