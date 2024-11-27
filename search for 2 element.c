#include<stdio.h>
int main()
{
	int i,n,element1,element2,a[10];
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf("enter the elements in array");
	for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    printf("enter the two elements to search for:");
    scanf("%d%d",&element1,&element2);
    int f1=0,f2=0;
    for(i=0;i<n;i++){
    	if (a[i]==element1) f1=1;
    	if (a[i]==element2) f2=1;
	}
	if(f1&&f2){
		printf("both the elements are present");
	}
	else if(f1){
	printf("only first element is present");
    }
    else if(f2){
    	printf("only second element is present");
	}
	else{
		printf("both the elements are not present.");
	}
	return 0;
}
