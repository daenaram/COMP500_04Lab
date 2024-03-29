#include <stdio.h>
int main(){
    
    char hero;
    
    printf("Which hero is your favourite, Superman (S) or Batman (B)?\n");
    scanf(" %c", &hero);
    
    if (hero == 's' || hero == 'S')
    {
        printf("The user's favourite super hero is Superman");
    }
    else if (hero == 'b' || hero == 'B')
    {
        printf("The user's favourite super hero is Batman");
    }
    else 
    {
        printf("Invalid response!");
    }
}
// result 
// Which hero is your favourite, Superman (S) or Batman (B)?
// The user's favourite super hero is {}
