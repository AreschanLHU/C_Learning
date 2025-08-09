#include <stdio.h>

int main(){
    int answer = 500;
    int count = 0;
    int guess;

    do{
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count += 1;
        if(guess > answer){
            printf("Too large!!\n");
        }else if(guess < answer){
            printf("Too small!!\n");
        }
    }while(guess != answer);
    printf("Great!! (%d).\n", count);

    return 0;
}
