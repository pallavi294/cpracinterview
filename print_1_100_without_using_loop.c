#include<stdio.h>
void print(int n)
{
	if(n<=100)
	{
		printf("%d ",n);
		print(n+1);
	}
}
int main()
{
	int n;
	print(1);
	return 0;

}
