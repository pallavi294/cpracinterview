//check if a num is prime or not
#include<stdio.h>
int main()
{
	int num,flag=0;
	printf("enter num: ");
	scanf("%d",&num);
	if(num%1==0 && num%num==0 && num>3)
	{
		for(int i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag++;
			}
		}
	}
	if(flag>0)
		printf("num=%d is not prime",num);
	else
		printf("num=%d is prime",num);
}
