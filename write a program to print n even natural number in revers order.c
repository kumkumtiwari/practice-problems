#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter a number");
	scanf("%d",&i);
	printf("Reverse of even natural number is ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",2*j);
	}
}
