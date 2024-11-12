#include<stdio.h>
int main()
{
	int a[20],i,n,max;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elments in an array:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i])
         max=a[i];
	}
	printf("max element in the array is %d",max);
	return 0;
}
