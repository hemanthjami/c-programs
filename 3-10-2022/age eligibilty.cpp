#include<stdio.h>
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>18)
	printf("eligible");
	else{
	
	printf("not eligible");
	printf("%d years to wait",18-age);
}
}
