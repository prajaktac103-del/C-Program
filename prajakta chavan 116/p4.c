#include<stdio.h>
int main()
{
	int a[5],i;
	printf("\n enter any 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray elements:");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}