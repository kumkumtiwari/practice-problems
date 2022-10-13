#include<stdio.h>
int main()
{
	int i=1,j,k;
	printf("Enter a natural number");
	scanf("%d",&j);
	printf("Even natural number is\n");
	for(i=1;i<=j;i++)
	{
		k=i*2;
		printf("%d\n",k);
	}
}
