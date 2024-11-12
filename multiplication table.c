#include<stdio.h>
int main()
{
	int i,j,n,product;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		product=i*n;
		printf("%d*%d=%d\n",i,n,product);
	}
	return 0;
}
