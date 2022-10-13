#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Enter a natural number");
	scanf("%d",&j);
	printf("sum of odd natural number\n");
	for(i=0;i<=j;i++)
	{
		k=i*2+1;
		printf("%d\n",k);
	}
}
