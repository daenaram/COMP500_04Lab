#include <stdio.h>
int main(){
    
    int operand1, operand2, result;
    char operation;
    
    printf("Input left operand?\n");
    scanf("%d", &operand1);
    
    printf("Input right operand?\n");
    scanf("%d", &operand2);
    
    printf("Operation (+,-,*,/)?\n");
    scanf(" %c", &operation);
    
    if (operation == '+')
    {
        result = operand1 + operand2;
        printf("The result is\n%d", result);
    }
    
    else if (operation == '-')
    {
        result = operand1 - operand2;
        printf("The result is\n%d", result);
    }
    
    else if (operation == '*')
    {
        result = operand1 * operand2;
        printf("The result is\n%d", result);
    }
    
    else if (operation == '/')
    {
        result = operand1 / operand2;
        printf("The result is\n%d", result);
    }
    
    
}
// result 
// the stupid calc
