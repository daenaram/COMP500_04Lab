#include <stdio.h>
int main(){
    
    int hours;
    printf("How many hours did you spend studying for the test?\n");
    scanf("%d", &hours);
    
    if (hours < 0)
    {
        printf("Invalid, you cannot have studied a negative number of hours!");
    }
    else if (hours <= 25)
    {
    printf("%d hours is probably not enough!", hours);
    }
    else if (hours < 39)
    {
        if (hours > 26)
        printf("Good, but was it enough...");
    }
    else if (40 < hours)
    {
        printf("Excellent, you should be well prepared for the test!");
    }
}

// result 
// How many hours did you spend studying for the test?
// 25 hours is probably not enough!
