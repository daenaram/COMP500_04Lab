#include <stdio.h>
int main(){
    
    int num1, num2;
    
    printf("Please enter a number:\n");
    scanf("%d", &num1);
    printf("Please enter another number:\n");
    scanf("%d", &num2);
    
    if (num1 < num2)
    {
        printf("%d is bigger than %d.", num2, num1);
    }
    else if (num1 > num2)
    {
    printf ("%d is bigger than %d.", num1, num2);
    }
    else if (num1 == num2)
    printf("The same number (%d) was entered twice.", num1);
    
    return 0;
    
}

// result 
// Please enter a number:
// Please enter another number:
// 62 is bigger than 25.
