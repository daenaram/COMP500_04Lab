#include <stdio.h>
#include <string.h>

int main() {
    char input[20]; 
    
    printf("What month were you born in?\n");
    scanf("%s", input);

    if (strcmp(input, "September") == 0 || strcmp(input, "September") == 0 || strcmp(input, "October") == 0 || strcmp(input, "November") == 0) {
        printf("%s in New Zealand is in Spring.\n", input);
    } else if (strcmp(input, "December") == 0 || strcmp(input, "January") == 0 || strcmp(input, "February") == 0) {
        printf("%s in New Zealand is in Summer.\n", input);
    } else if (strcmp(input, "March") == 0 || strcmp(input, "April") == 0 || strcmp(input, "May") == 0) {
        printf("%s in New Zealand is in Autumn.\n", input);
    } else if (strcmp(input, "June") == 0 || strcmp(input, "July") == 0 || strcmp(input, "August") == 0) {
        printf("%s in New Zealand is in Winter.\n", input);
    } else {
        printf("%s is not a month!\n", input);
    }

    return 0;
}

// result 
// Birthday Season Identifier
