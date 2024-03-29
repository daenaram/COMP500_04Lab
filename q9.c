#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;
    float length_squared, length;
    float nx, ny, nz;

    printf("x:\ny:\nz:\n");
    scanf("%f %f %f", &x, &y, &z);
    length_squared = x * x + y * y + z * z;

    length = sqrtf(length_squared);

    nx = x / length;
    ny = y / length;
    nz = z / length;

    printf("Normalised: %f, %f, %f", nx, ny, nz);

    return 0;
}

// result 
// x:
// y:
// z:
// Normalised: 0.455842, 0.569803, 0.683763
