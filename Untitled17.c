#include<stdio.h>
main()
{
	int age;
	printf("pls enter your real age\n=");
	scanf("%d",&age);
	(age>=18)? (printf("can vote\n pls register u r voter id")):(printf("cannot vote \n pls come after you turn 18"));
}
