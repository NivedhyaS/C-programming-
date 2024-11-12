#include<stdio.h>
int main()
{
	int n,square,cube;
	printf("enter n:");
	scanf("%d",&n);
	square=n*n;
	cube=n*n*n;
	printf("square of %d is %d",n,square);
	printf("\n");
	printf("cube of %d is %d",n,cube);
	return 0;
}
