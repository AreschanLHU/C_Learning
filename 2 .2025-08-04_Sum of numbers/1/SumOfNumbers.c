#include <stdio.h>

int main(){
    int integer1 = 0;
    int integer2 = 0;
    int integer3 = 0;
    int sum = 0;
    printf("Please enter the first number: ");
    scanf("%d", &integer1);
    printf("Please enter the second number: ");
    scanf("%d", &integer2);
    printf("Please enter the third number: ");
    scanf("%d", &integer3);
    sum = integer1 + integer2 + integer3;
    printf("Sum is %d.\n", sum);

    return 0;
}
