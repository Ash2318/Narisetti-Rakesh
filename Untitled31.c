#include<stdio.h> // #include is preprocessor directive
main()
{
	int age;
	char name[10];
	printf("enter your name:  ");
	scanf("%s",&name);
	printf("\nenter your age:  ");
	scanf("%d",&age);
	if(age>18)
	{
		printf("YAY!  your %d year above than 18",age-18);
		printf("\n%s pls register your voter id , if done ignore the message",name);
		
	}
	else
	{
		printf("%s,your short of %d",name,18-age);
		printf("\nsorry kid!!!!");
	}
}
