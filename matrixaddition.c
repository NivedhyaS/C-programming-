#include<stdio.h>
int main()
{
	int i,j,r,c,a[5][5],b[5][5],s[5][5];
    printf("enter the no of rows and column:");
	scanf("%d%d",&r,&c);
	printf("enter the first matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d]->",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter b[%d][%d]->",i,j);
			scanf("%d",&b[i][j]);
		}
	}		
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		s[i][j]=a[i][j]+b[i][j]	;
		}
		}
		printf("sum of matrices is:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d ",s[i][j]);
			}
			printf("\n");
		}
	
	}
	
