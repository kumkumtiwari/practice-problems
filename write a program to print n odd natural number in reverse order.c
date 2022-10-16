#include<stdio.h>
int main()
{
	int i;
	printf("Enter a number");
	scanf("%d",&i);
	for(i;i>=1;i--)
	{
		printf("%d ",2*i-1);
	}
}
