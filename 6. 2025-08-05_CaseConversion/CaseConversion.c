#include <stdio.h>
#include <string.h>

int main(){
    /*
    char value1 = 'A';
    char value2 = 'a';
    char sum1 = 'A' + 1;   //B
    char sum2 = 'a' + 1;   //b
    char sum3 = 'A' - 1;   //@
    char sum4 = 'A' + '1'; //ASCII 114 = r
    printf("%c, %c, %c, %c,", sum1, sum2, sum3, sum4);
    */

    /*
    char input, output;

    printf("Please enter a english alphabet: ");
    scanf("%c", &input);
    if(input >= 65 && input <= 90){ // upper
        output = input + 32;
        printf("Case Conversion is %c\n", output);
    }
    else if(input >= 97 && input <= 122){ //lower
        output = input - 32;
        printf("Case Conversion is: %c\n", output);
    }
    else{
        printf("ASCII %d, %c, Not english alphabet", input, input);
    };
    */

    char output, buffer[3];

    printf("Please enter a english alphabet: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    if (strlen(buffer) != 1) {
        printf("Error: You entered more than one character.\n");
    }
    else {
        char input = buffer[0];
        printf("You entered: %c\n", input);
        if(input >= 65 && input <= 90){ // upper
            output = input + ('a' - 'A');
            printf("Case Conversion is %c\n", output);
        }
        else if(input >= 97 && input <= 122){ //lower
            output = input - ('a' - 'A');
            printf("Case Conversion is: %c\n", output);
        };
    };


    return 0;
}
