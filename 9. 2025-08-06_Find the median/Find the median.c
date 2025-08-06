#include <stdio.h>

int main() {
    int a, b, c, med;
    printf("Please enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);
    med = a;
    //if ((b > a && b > c && a > c) || (c > a && c > b && a > b)) {
    //    med = a;
    //}
    if ((a > b && a > c && b > c) || (c > a && c > b && b > a)) {
        med = b;
    }
    if ((a > b && a > c && c > b) || (b > a && b > c && c > a)) {
        med = c;
    }
    printf("The median number is: %d.\n", med);

    return 0;
}
