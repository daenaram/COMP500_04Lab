#include <stdio.h>

int main(){
    
    int income;
    
    printf("What is your income?\n");
    scanf("%d", &income);
    
    if (income < 14000)
    {
        printf("Tax rate: 10.5%%");
    }
    
    else if (income < 48000)
    {
        if (income > 14001)
        {
            printf("Tax rate: 17.5%%");
        }
    }
    else if (income < 70000)
    {
        if (income > 48001)
        {
            printf("Tax rate: 30.0%%");
        }
    }
    else 
    {
        printf("Tax rate: 33.0%%");
    }
}

// result 
// user tax
