#include<stdio.h>
int main()
{
	int rows,num=1;
	printf("enter num of rows: ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",num++);
		}
		printf("\n");
	}
}
