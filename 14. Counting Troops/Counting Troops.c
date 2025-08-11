#include <stdio.h>
// %3==2 && %5==3 && %7 == 2
int main(){
    int min, max;
    int number;
    int answer = 0;

    printf("MIN = ");
    scanf("%d", &min);
    printf("MAX = ");
    scanf("%d", &max);

    for(number = max; number != min; --number){
        if(number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            printf("number: %d\n", number);
        }
    }

    return 0;
}
