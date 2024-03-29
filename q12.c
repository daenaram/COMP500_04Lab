#include <stdio.h>
int main(){
    
    char score;
    
    printf("Did you score more than 50%% in Practical Test 1 (y/n)?\n");
    scanf(" %c", &score);
    
    if (score == 'y' || score == 'Y')
    {
        printf("Great! Hope you score well in Practical Test 2!");
    }
    else if (score == 'n' || score == 'N')
    {
        printf("Oh no! Hopefully your Practical Test 2 result is better!");
    }
    else 
    {
        printf("Your response makes no sense!");
    }
    
    return 0;
}

// result
// Did you score more than 50% in Practical Test 1 (y/n)?
// Great! Hope you score well in Practical Test 2!
