#include<stdio.h>
int main()
{
	int pass, x=10;
	while(x!=0);
	{
		printf("\ninput the password:");
		scanf("%d",&pass);
		if(pass==1234)
		{
			printf("correct password");
			x=0;
		}
		else
		{
			printf("wrong password, trty another");
		}
		printf("\n");
	}
	return 0;
}
