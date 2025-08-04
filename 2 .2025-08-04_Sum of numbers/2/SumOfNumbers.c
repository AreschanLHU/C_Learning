#include <stdio.h>

int main(){
    int integer = 0;
    int sum = 0;
    printf("Please enter the first number: ");
    scanf("%d", &integer);
    sum = integer;
    printf("Please enter the second number: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Please enter the third number: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Sum is %d.\n", sum);

    return 0;
}
