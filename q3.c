#include <stdio.h>

int main() {
    char health, location;

    printf("Is the player's health low or high (l/h)?\n");
    scanf(" %c", &health);
    printf("Where is the player, close or far (c/f)?\n\n");
    scanf(" %c", &location);

    if (health == 'h') {
        if (location == 'c') {
            printf("The AI should call for reinforcements.\n");
        } else if (location == 'f') {
            printf("The AI should go to sleep.\n");
        } else {
            printf("Invalid location input.\n");
        }
    } else if (health == 'l') {
        if (location == 'c') {
            printf("The AI should attack.\n");
        } else if (location == 'f') {
            printf("The AI should start searching.\n");
        } else {
            printf("Invalid location input.\n");
        }
    } else {
        printf("Invalid health input.\n");
    }

    return 0;
}

// result 
// Video Game AI Response
