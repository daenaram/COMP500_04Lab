#include <stdio.h>

int main(){
    
    char thisIsSoInfuriating;
    
    printf("Are you enjoying the COMP500/ENSE501 labs (y/n)?\n");
    scanf(" %c", &thisIsSoInfuriating);
    
    if (thisIsSoInfuriating == 'y')
    {
        printf("Great! Keep going this is only week 4!");
    }
    else if (thisIsSoInfuriating == 'n')
    {
        printf("Oh no! Don't worry only eight short weeks to go!");
    }
    
    else 
    {
        printf("Your response makes no sense!");
    }
}

// result 
// Are you enjoying the COMP500/ENSE501 labs (y/n)? (absolutely fucken not)
// Great! Keep going this is only week 4!
