#include <stdio.h>

int main()
{
    char a;
    char b;
    scanf(" %c", &a);
    scanf(" %c", &b);

    printf("Is the temperature warm or cold (w/c)?\n");
    printf("Is it dry or humid (d/h)?\n");
    if (a == 'w' && b == 'd')
    {
        printf("\n");
        printf("You should play tennis.\n");
    }
    else if (a == 'w' && b == 'h')
    {
        printf("\n");
        printf("You should go swimming.\n");
    }
    else if (a == 'c' && b == 'd')
    {
        printf("\n");
        printf("You should study Programming 1.\n");
    }
    else if (a == 'c' && b == 'h')
    {
        printf("\n");
        printf("You should read a book.\n");
    }
}

// from pammy 

// result 
// Activity Decider
