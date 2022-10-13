#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two number:");
	scanf("%d \n%d",&a,&b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("%d\n%d",a,b);
}
