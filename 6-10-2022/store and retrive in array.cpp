#include<stdio.h>
int main()
{
	int arr[25],i,n;
	printf("input the number of elements to store in the array :");
	scanf("%d",&n);
	printf("input %d number of elements in the array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("element - %d:",i);
		scanf("%d",arr+i);
	}
	printf("the elements yoy entered are :\n");
	for(i=0;i<n;i++)
	{
		printf("element - %d : %d\n",i,*(arr+i));
	}
	return 0;
}
