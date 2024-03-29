#include <stdio.h>
int main(void)
{
    char response;
    
    printf("Question (Y/N)?\n");
    scanf(" %c", &response);
    printf("User response: ");
    
    
    if (response != 'n' && response != 'y' && response != 'Y' && response != 'N') 
    {
    printf("Invalid input!");
    
    return 0;
        
    }
    
    if (response =='y' || response == 'Y')
    {
    printf("Yes");
    }
    
    else if (response =='n' || response == 'N')
    {
        printf("No");
    }
    
    return 0;
}

// result 
// Question (Y/N)?
// User response: Yes
