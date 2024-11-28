#include <stdio.h>

int second_largest(int arr[], int n){
    if (n<2){
        return -1;  
    }

    int largest=arr[0];
    int second_largest=-1;

    for(int i=1; i<n;i++) {
        if(arr[i]>largest){
            second_largest=largest;  
            largest=arr[i];       
        } else if(arr[i]>second_largest&&arr[i]!=largest){
            second_largest=arr[i];
        }
    }

    return second_largest;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array must contain at least 2 elements to find the second largest.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result=second_largest(arr, n);
    if (result != -1) {
        printf("The second largest element is %d\n", result);
    } else {
        printf("Second largest element not found.\n");
    }

    return 0;
}

