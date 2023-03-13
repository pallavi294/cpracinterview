//check if a number is perfect number or not
#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter num: ");
	scanf("%d",&num);
	for(int i=1;i<=num/2;i++)//if the sum of given number's proper divisors is equal to the number itself then it is a perfect number 
	{
		if(num%i==0)//check divisibility of proper divisors(proper divisors will be less than or equal to num/2 not greater)
		{	sum+=i;}
	}
	if(sum==num && num>0)
		printf("num=%d is a perfect number\n",num);
	else
		printf("num=%d is not a perfect number\n",num);


}
