#include<stdio.h>
int main()
{
int a[20],i,n,even,odd;
     printf("enter the limit :");
     scanf("%d",&n);
     printf("elements in the array:\n");
     for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++){
     	if(a[i]%2==0){
         printf("%d ",a[i]);
    } 
}
   for(i=0;i<n;i++){
   	if(a[i]%2!=0){
   printf("%d ",a[i]);
   }
}
return 0;
}
