#include<stdio.h>
int main()
{
	int a,b,sum,sub,mult,div;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mult=a*b;

	printf("sum=%d\n",sum);
	printf("sub=%d\n",sub);
	printf("product=%d\n",mult);
	if(b!=0){
		div=a/b;
		printf("div:%d\n",div);
	}
	else{
		printf("division by zero is not possible\n");
	}
	return 0;
	
}
