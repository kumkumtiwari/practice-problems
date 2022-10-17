#include<stdio.h>
int main()
{
	int i,j=0,k;
	printf("Enter a natural number");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	j=j+i;
	printf("sum of n natural number is %d ",j);
}
