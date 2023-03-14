#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,flag=0;
	printf("enter len: ");
	scanf("%d",&n);
	char *str=(char *)malloc(n*sizeof(char));
	printf("\nenter str: ");
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
		}
		break;
	}
	if(flag==1)
	{
		printf("%s is not palindrome",str);
	}
	else
		printf("%s is palindrome",str);
}

