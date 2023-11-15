/*dynamic memory management
malloc() garbage value
calloc() 0                      /*malloc and caloc the meory location is different but the visualisation is same*/
/*relloc() when we use this n value should be larger than before
free()*/                     
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	n=5; //int type values you want to use
	//void * malloc(size)
	// void *calloc(n,size)
	//void * realloc(pointerToObject,newsize)
//	p=(int *)malloc(n*(sizeof(int)); // basic syntax
    p=(int *)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("not suffieceint memory");
		exit(1);
	
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("enter the values to be done by dma\n");
			
			scanf("%d",p+i);
		}
		p=(int *)realloc(p,n*(sizeof(int)));
	}
/*	i=0;
	while(i<n)
	{
		printf("a[%d]=%d\n",i,*(p+i));
		i++;
	}*/
	free(p);
	printf("%d",*(p+2));
}
