#include<stdio.h>
int main()
{
	int i;
	printf("Enter a number");
	scanf("%d",&i);
	if(i%5==0)
	printf("%d is divisible by 5",i);
	else
	printf("%d is not divisible by 5",i);
}
