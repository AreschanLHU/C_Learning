#include <stdio.h>

int main() {
    int side1, side2, side3;
    int temp;
    int other = 0;
    printf("Please enter 3 lengths.(ex:3 4 5): ");
    scanf("%d%d%d", &side1, &side2 ,&side3);
    // 5, 3, 1
    // 3, 5, 1
    // 3, 1, 5
    // 1, 3, 5
    if (side1 > side2) {
        temp = side1;
        side1 = side2;
        side2 = temp;
    }
    if (side2 > side3) {
        temp = side2;
        side2 = side3;
        side3 = temp;
    }
    if (side1 > side2) {
        temp = side1;
        side1 = side2;
        side2 = temp;
    }

    // Rule
    if (side3 > side1 + side2) {
        printf("Not a triangle.\n");
    } else {
        //Regular triangle
        if (side1 == side3) {
            printf("Regular triangle.\n");
            other = 1;
        }
        //Isosceles triangle
        if (side1 == side2 || side2 == side3) {
            printf("Isosceles triangle.\n");
            other = 1;
        }
        //Right triangle
        int db_side1 = side1 * side1;
        int db_side2 = side2 * side2;
        int db_side3 = side3 * side3;
        if (db_side1 + db_side2 == db_side3) {
            printf("Right triangle.\n");
            other = 1;
        }
        if (other == 0) {
            printf("Non regular triangle.");
        }
    }
    return 0;
}

