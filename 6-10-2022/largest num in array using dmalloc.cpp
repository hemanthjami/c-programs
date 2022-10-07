#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num;
	float *data;
	printf("enter total number of elements(1 to 100):");
	scanf("%d",&num);
	data=(float*)calloc(num,sizeof(float));
	if(data==0)
	{
		printf("error! memory not allocated");
		exit(0);
	}
	printf("\n");
	for(i=0;i<num;i++)
	{
		printf("enter element %d:",i++);
		scanf("%f",data+i);
	}
	for(i=0;i<num;i++)
	{
		if(*data<*(data+i))
		*data=*(data+i);
	}
	printf("largest element = %2f",*data);
	return 0;
}
