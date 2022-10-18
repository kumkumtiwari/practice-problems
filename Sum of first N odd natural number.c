#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	printf("Enter a natural number");
	scanf("%d",&n);
	printf("sum of odd natural number is ");
	while(i<=n)
	{
		s=s+2*i-1;
		i++;
	}
		printf("%d\n",s);
}
