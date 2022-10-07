#include<stdio.h>
int main()
{
	int num,fact=1;
	int *pn,*pf;
	printf("enter any number: ");
	scanf("%d",&num);
	pn=&num;
	pf=&fact;
	do
	{
		*pf=(*pf)*(*pn);
		*pn=*pn-1;
	}
	while(*pn>0);
	printf("\n factorial of entered number is : %d",*pf);
	return (0);
}
