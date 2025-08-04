#include <stdio.h>

int main(){
    int integer1 = 0;
    int integer2 = 0;
    int temp = 0;
    printf("Please enter the first number: ");
    scanf("%d", &integer1);
    printf("Please enter the second number: ");
    scanf("%d", &integer2);

    temp = integer1;
    integer1 = integer2;
    integer2 = temp;
    printf("integer1 is %d, integer2 is %d.\n", integer1, integer2);

    return 0;
}
