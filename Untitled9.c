//declare the name roolno 3 subjects from the user
// declare the sum and percentagenof the user
#include<stdio.h>
main()
{
	char name;
	int rollno;
	int hindi,math,sci,sum;
	float per;
	printf("enter the name and the roll no.");
	scanf("%c%d",&name,&rollno);
	printf("enter the marks of the subjects");
	printf("\nhindi");
	scanf("%d",&hindi);
	printf("\nmath");
	scanf("%d",&math);
	printf("\nscience");
	scanf("%d",&sci);
	sum= hindi+math+sci;
	per= sum/3;
	printf("\nsum=%d",sum);
	printf("\npercentage=%f",per);
}
