#include<stdio.h>


int check(int n)
{
	int rem, res=0;
	while(n>0)
	{
		rem=n%10;
		res=(res*10)+rem;
		n=n/10;
	}
	return res;
}	
int main()
{
	int var, temp;
	printf("Enter the number:\n");
	scanf("%d", &var);
	temp=var;
	if(check(temp)==var)
	{
		printf("The number is palindrome\n");
	}else
	{
		printf("The number is not palindrome\n");
	}
	return 0;
}
