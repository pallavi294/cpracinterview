#include<stdio.h>


int main()
{
	int n, rem, temp;
	int ans=0;
	printf("Enter the number: \n");
	scanf("%d", &n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;  //the square of numbers should be equal to given number is nothing but an armstrong number 
		ans+=rem*rem*rem;
		temp=temp/10;
	}
	if(ans==n)
	{
		printf("The given number is armstrong number\n");
	}else
	{
		printf("The given number is not an armstrong number\n");
	}
	return 0;
}
