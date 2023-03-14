#include<stdio.h>
int main()
{
	int a=0,b=1,sum,num;
	printf("enter range: ");
	scanf("%d",&num);
	sum=a+b;
	printf("%d %d ",a,b);
	for(int i=3;sum<=num;i++)
	{
		printf("%d ",sum);
		a=b;
		b=sum;
		sum=a+b;
	}

}
