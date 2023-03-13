#include<stdio.h>

int main()
{
	int n,r,rev=0;
	printf("enter any number\n");
	scanf("%d",&n);

	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse number:%d\n",rev);
}

