#include<stdio.h>
int main()
{
	int i,j,sum,sub,mul,mod;
	float div;
	printf("enter any two numbers");
	scanf("%d%d",&i,&j);
	sum=i+j;
	sub=i-j;
	mul=i*j;
	div=(float)i/j;
	mod=i%j;
	printf("sum=%d\n",sum);
	printf("sub=%d\n",sub);
	printf("mul=%d\n",mul);
	printf("div=%f\n",div);
	printf("mod=%d\n",mod);
	return 0;
}
