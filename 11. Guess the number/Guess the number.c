#include <stdio.h>

int main(){
    int answer = 500;
    int count = 0;
    int guess;

    while(count == 0 || guess != answer){
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count += 1;
        if(guess < answer){
            printf("Too large!!\n");
        }else if(guess > answer){
            printf("Too small!!\n");
        }
    }
    printf("Great!! (%d).\n", count);

    return 0;
}
