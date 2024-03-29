#include <stdio.h>

int main() {

    int x, y, z;
    
    printf("x:\n");
    scanf("%d", &x);
    printf("y:\n");
    scanf("%d", &y);
    printf("z:\n");
    scanf("%d", &z);

    int a = x * x;
    int b = y * y;
    int c = z * z;

    int result = a + b + c;

    printf("Computed: %d\n", result);

    return 0;
}

// from pammy 
// saving me from insanity fr

// result 
// x:
// y:
// z:
// Computed: 2778

