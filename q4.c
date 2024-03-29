#include <stdio.h> 
int main (){
    
    float purchase, discount, total;
    
    printf("Input the total purchase price:\n");
    scanf("%f", &purchase);
    
    if (purchase < 2500)
    {
        discount = 0;
    printf("Discount is: %.2f\n", discount);
    printf("Payable Total is: %.2f\n", purchase);
    }
    
    else if (purchase < 6499)
    {
        discount = purchase * 0.05;
        total = purchase - discount;
    printf("Discount is: %.2f\n", discount);
    printf("Payable Total is: %.2f", total);
    }
    
    else if (purchase < 10000)
    {
        discount = purchase * 0.10;
        total = purchase - discount;
    printf("Discount is: %.2f\n", discount);
    printf("Payable Total is: %.2f", total);
    }
    
    else if (purchase < 100000)
    {
        discount = purchase / 8;
        total = purchase - discount;
    printf("Discount is: %.2f\n", discount);
    printf("Payable Total is: %.2f", total);
    }
    
}

// result
// Input the total purchase price:
// Discount is: 250.00
// Payable Total is: 4750.00
