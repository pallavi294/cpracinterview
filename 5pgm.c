//check if a number is even or odd
#include<stdio.h>
int main()
{
	int num;
	printf("enter num: ");
	scanf("%d",&num);
	if((num&1)==0)
		printf("num=%d is even\n",num);
	else
		printf("num=%d is odd\n",num);
}
