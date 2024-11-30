#include <stdio.h>
int main() {
    int rows,colms;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &colms);
    int m[rows][colms];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nSum of each row:\n");
    for (int i=0;i<rows;i++){
        int rowSum=0;
        for(int j=0;j<colms;j++){
            rowSum+=m[i][j];
        }
        printf("Sum of row %d: %d\n",i+1,rowSum);
    }
    printf("\nSum of each column:\n");
    for (int j=0;j<colms;j++){
        int colSum=0;
        for(int i=0;i<rows;i++){
            colmSum += m[i][j];
        }
        printf("Sum of column %d: %d\n",j+1,colmSum);
    }

    return 0;
}

