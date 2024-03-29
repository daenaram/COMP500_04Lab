#include <stdio.h>
int main(void){
    
    float result;
    char report;
    
    printf("What did you score in Practical Test 1?\n");
    scanf("%f", &result);
    
    printf("Did you submit Reporting Journal – Stage 1 (y/n)?\n\n");
    scanf(" %c", &report);
    
    if (result < 50)
    {
        if (report == 'y')
        {
            printf("Practice more programming exercises!");
        }
        else 
        {
            printf("More practice and keep a journal!!!");
        }
    } 
    else
    {
        if (report == 'y')
        {
            printf("Well done! Keep studying well...");
        }
        else 
        {
            printf("Oh no, you should keep a journal!");
        }
        
    }
    
}

// result 
// What did you score in Practical Test 1?
//Did you submit Reporting Journal – Stage 1 (y/n)?

// Well done! Keep studying well...
