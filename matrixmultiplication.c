#include<stdio.h>
int main()
{
int a[10][10],b[10][10],m[10][10],i,j,r,k,c,p;
    printf("enter the number of rows and column:");
    scanf("%d%d",&r,&c);
    printf("enter the number of columns for second matrix:");
    scanf("%d",&p);
    if(c!=r){
        printf("Matrix multiplication not possible.");
    return 0;
}

    printf("enter the first matrix:\n");
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("enter a[%d][%d]->",i,j);
    scanf("%d",&a[i][j]);
  }
 }
    printf("enter the second matrix:\n");
    for(i=0;i<c;i++){
    for(j=0;j<p;j++){
    printf("enter b[%d][%d]->",i,j);
    scanf("%d",&b[i][j]);
   }
   }
    for(i=0;i<r;i++){
         for(j=0;j<p;j++){
         m[i][j]=0;
     }
   }
   for (i=0;i<r;i++){
        for(j=0;j<p;j++){
            for(k=0;k<c;k++){
           m[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    printf("\nproduct of matrices :\n");
    for(i=0;i<r;i++){
       for(j=0;j<p;j++){
         printf("%d ",m[i][j]);
 }

    printf("\n");
}
    return 0;
}

