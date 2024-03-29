#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the first side length:\n");
    printf("Enter the second side length:\n");
    printf("Enter the third side length:\n\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("This is an equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("This is an isosceles triangle.\n");
    } else {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}

// result 
// *** INSANITY *** 
// kidding
// Triangle Type Identifier
