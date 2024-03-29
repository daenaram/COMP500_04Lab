#include <stdio.h>

int main(){
    char course;
    printf("Which course are you enrolled in, COMP500 (C) or ENSE501 (E)?\n\n");
    scanf(" %c", &course);
    
    if (course != 'c' && course != 'C' && course != 'e' && course != 'E')
    {
        printf("Invalid response!");
    return 0;
    }
    
    else if (course == 'c' || course == 'C')
    {
        printf("The user is enrolled in COMP500");
    }
    else if (course == 'e' || course == 'E')
    {
        printf("The user is enrolled in ENSE501");
    }
    
}

// result 
// Which course are you enrolled in, COMP500 (C) or ENSE501 (E)?
// The user is enrolled in COMP500
