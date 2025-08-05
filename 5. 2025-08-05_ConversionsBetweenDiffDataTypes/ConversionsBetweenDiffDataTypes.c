#include <stdio.h>

int main() {
    int num1 = 3;
    int num2 = 3;
    int num3 = 4;

    double average1 = (num1 + num2 + num3) / 3;  // 3.00000
    double average2 = (num1 + num2 + num3) / 3.; // 3.333333
    float average3 = (num1 + num2 + num3) / 3.;   // 3.333333f
    printf("%f, %.16f, %.8f", average1, average2, average3);

    return 0;
}
