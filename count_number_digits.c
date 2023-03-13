#include<stdio.h>
int main()
{
	int n=13;
	int num,count=0;
	while(n>0)
	{
	
		count++;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
