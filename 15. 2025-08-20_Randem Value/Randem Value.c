#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int dice;
    dice = rand() % 6 + 1;
    printf("time = %d\n", time(0));
    printf("dice = % d\n", dice);

    return 0;
}
