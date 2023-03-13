#include<stdio.h>


int main()
{
	int num, temp, rem;
	int fact, sum=0;
	printf("Enter the number\n");
	scanf("%d", &num);

	temp=num;

	while(temp!=0)
	{
		rem=temp%10;
		fact=1;
		for(int i=1;i<=rem;i++)
		{
			fact*=i;
		}
		sum+=fact;
		temp/=10;
	}
	if(sum==num)
	{
		printf("The given number is strong number\n");
	}else
	{
		printf("The given number is not strong number\n");
	}
	return 0;
}
