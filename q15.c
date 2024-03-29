#include <stdio.h>
int main(){
    int num1, num2, num3; 
    
    printf("Please enter a number:\n");
    scanf("%d", &num1);
    
    printf("Please enter another number:\n");
    scanf("%d", &num2);
    
    printf("Please enter a third number:\n\n");
    scanf("%d", &num3);
    
    int highest = num1; 
    if (num2 > highest) 
    {
        highest = num2; 
    }
    if (num3 > highest) 
    {
        highest = num3; 
    }

    int lowest = num1; 
    if (num2 < lowest) 
    {
        lowest = num2; 
    }
    if (num3 < lowest) 
    {
        lowest = num3; 
    }
    
    printf("Biggest number was: %d\n", highest);
    printf("Smallest number was: %d", lowest);
}

// result 
// You need to write a C program that asks the user to input three whole numbers. The program should then compute and output the biggest and smallest numbers among the three inputs.
