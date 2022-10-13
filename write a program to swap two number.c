#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d \n%d \n%d",c,a,b);
}
