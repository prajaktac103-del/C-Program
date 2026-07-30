#include<stdio.h>
int main()
{
	int a[3]={10,20,30};
	float b[3]={10.1,10.2,10.3};
	char c[3]={'a','b','c'};
	int i;
	printf("\n array elements for integer:");
	for(i=0;i<3 ;i++)
	{
		printf("%d",a[i]);
	}
	printf("\narray elements for float:");
	for(i=0;i<3;i++)
	{
		printf("%f",b[i]);
	}
	printf("\narray elements for charater:");
	for(i=0;i<3;i++)
	{
		printf("%s",c[i]);
	}
	return 0;
}