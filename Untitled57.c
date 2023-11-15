#include<stdio.h>
main()
{
	int a[50]={2,5,6,8,9,9,5,3};
	int i,key=3,loc=-1;
	
	for(i=0;i<10;i++)
	{
		if (a[i]==key)
		{
			loc=i;
			
			
		}
	}
		if(loc!=-1)
		{
		 printf("the loction is %d\n",loc+1);
		 
		}
		else
		{
		
		printf("\nnot found");
	}
	
	
}
