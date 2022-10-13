#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three numbers");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		{
			printf("%d is greater",x);		
		}else{
			printf("%d is greater", z);
		}
	}
	else{
		if(y>z){
			printf("%d is greater",y);
		}else{
			printf("%d is greater",z);
		}
	}
}
