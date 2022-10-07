#include<stdio.h>
long addtwonumbers(long*,long*);
int main()
{
	long fno,sno,sum;
	printf("input the first number :");
	scanf("%d",&fno);
	printf("input the second number :");
	scanf("%d",&sno);
	sum=addtwonumbers(&fno,&sno);
	printf("the sum of %ld and%ld is %ld \n\n",fno,sno,sum);
	return 0;
}
long addtwonumbers(long*n1,long*n2)
{
	long sum;
	sum=*n1 + *n2;
	return (sum);
}
