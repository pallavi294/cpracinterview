#include<stdio.h>
int main()
{
	int n=123;
	int rem;
	while(n>0)
	{
		rem=n%10;
		printf("%d ",rem);
		n=n/10;
	}
return 0;
}
