#include <stdio.h>

int main() {
    int x, y, a, b;
    float result;

    printf("Enter the x value:\n");
    scanf("%d", &x);

    printf("Enter the y value:\n");
    scanf("%d", &y);

    a = x * y;
    b = x + y;
    result = b * b + a * (b - x) * (a + y);

    // Display the computed 'result'
    printf("Computed: %f\n", result);

    return 0;
}

// result 
// Enter the x value:
// Enter the y value:
// Computed: 799.000000
