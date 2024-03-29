#include <stdio.h>

int main() {
    char input;

    printf("Input a character:\n");
    scanf(" %c", &input);

    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        printf("The input was alphabetic.\n");
    } else {
        printf("The input was not alphabetic.\n");
    }

    return 0;
}

// result 
// Alphabetic Checker
