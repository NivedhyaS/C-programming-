#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i = 0;
    while (str[i]!='\0'){
        i++;
    }
    printf("Reversed string: ");
    for (i =i-1;i>=0;i--){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

