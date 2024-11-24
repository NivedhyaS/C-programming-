#include<stdio.h>
int main()
{
	int n,i,j,a[10];
	printf("enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter element [%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(j=0;j<n;j++){
		printf("a[%d]=%d\n",j,a[j]);
		
	}
	return 0;
}
