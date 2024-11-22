#include<stdio.h>
int main()
{
	int n,sum,i=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum = %d",sum);
	return 0;
}
