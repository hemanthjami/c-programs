#include<stdio.h>
int main()
{
	int a,b,big,*p,*q;
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	if(*p>*q)
	big=*p;
	else
	big=*q;
	printf("big=%d",big);
}
