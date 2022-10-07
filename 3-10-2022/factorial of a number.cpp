#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("enter an integer");
	scanf("%d",&n);
	if(n < 0)
	printf("error");
	else{
		for(i=1;i<=n;i++)
		{
			fact*=i;
		}
	}
	printf("factorial of %d=%d",n,fact);
}
