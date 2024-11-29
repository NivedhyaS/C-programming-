#include <stdio.h>
int main() {
    int num1,num2,result,shiftbits,choice;
    while(1) {
        printf("\nBitwise Operations:\n");
        printf("1.AND (&)\n");
        printf("2.OR (|)\n");
        printf("3.XOR (^)\n");
        printf("4.NOT (~)\n");
        printf("5.Left Shift (<<)\n");
        printf("6.Right Shift (>>)\n");
        printf("7.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 7)break;
        switch(choice){
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result of %d & %d = %d\n",num1,num2,num1&num2);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result of %d | %d = %d\n",num1,num2,num1|num2);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Result of %d ^ %d = %d\n",num1,num2,num1^num2);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num1);
                printf("Result of ~%d = %d\n", num1,~num1);
                break;
            case 5:
                printf("Enter a number and shift count: ");
                scanf("%d %d", &num1, &shiftbits);
                printf("Result of %d<<%d=%d\n",num1,shiftbits,num1<<shiftbits);
                break;
            case 6:
                printf("Enter a number and shift count: ");
                scanf("%d %d", &num1, &shiftbits);
                printf("Result of %d >> %d = %d\n",num1,shiftbits, num1>>shiftbits);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
