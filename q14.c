#include <stdio.h>
int main()
{
    char q1, q2, q3;
    
    printf("At least 80%% lab tutorial attendance (y/n)?\n");
    scanf(" %c", &q1);
    printf("Minimum of 40%% achieved in Final Exam (y/n)?\n");
    scanf(" %c", &q2);
    printf("Minimum of C- overall grade (y/n)?\n\n");
    scanf(" %c", &q3);
    
    if ((q1 == 'y' || q1 == 'Y') && (q2 == 'y' || q2 == 'Y') && (q3 == 'y' || q3 == 'Y')) 
    {
        printf("Student passes COMP500/ENSE501.");
    }
    
    else if ((q1 == 'n' || q1 == 'N') && (q2 == 'n' || q2 == 'N') && (q3 == 'n' || q3 == 'N')) 
    {
        printf("Student fails COMP500/ENSE501.");
    }
    
    else if ((q1 == 'y' || q1 == 'Y') && (q2 == 'n' || q2 == 'N') && (q3 == 'y' || q3 == 'Y')) 
    {
        printf("Student fails COMP500/ENSE501.");
    }
    
    else if ((q1 == 'n' || q1 == 'N') && (q2 == 'y' || q2 == 'Y') && (q3 == 'y' || q3 == 'Y')) 
    {
        printf("Student fails COMP500/ENSE501.");
    }
}
