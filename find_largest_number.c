#include<stdio.h>
int main()
{
	int n,i,max;
	printf("enter a number :");
	scanf("%d",&n);
	int number[n];
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	max=number[0];
	for(i=0;i<n;i++)
	if(number[i]>max)
	{
		max=number[i];
	}
	printf("%d ",max);


	return 0;
}



