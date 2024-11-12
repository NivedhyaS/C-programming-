#include<stdio.h>
int main()
{
	int i,n,a[20],large;
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf("read elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=0;i<n;i++){
		if(large<a[i])
		large=a[i];
}
	printf("\n largest number is %d",large);
}
