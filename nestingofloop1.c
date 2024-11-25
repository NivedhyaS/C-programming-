#include<stdio.h>
int main()
{
	int i=1,j,n;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n){
		j=1;
		while(j<=i){
			printf("%d\t",j);
			j++;
		}
	printf("\n");
	i++;
    }
	return 0;
}
