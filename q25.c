#include <stdio.h>

int main() {
    float percentage;
    char grade;

    printf("Please enter your Practical Test 1 percentage:\n");
    scanf("%f", &percentage);

    if (percentage >= 90) {
        grade = 'A';
        printf("%f%% is a '%c%c'\n", percentage, grade, '+');
    
    } else if (percentage >= 85) {
        grade = 'A';
        printf("%f%% is a '%c'\n", percentage, grade);
        
    } else if (percentage >= 80) {
        grade = 'A';
        printf("%f%% is a '%c%c'\n", percentage, grade, '-');
        
    } else if (percentage >= 75) {
        grade = 'B';
        printf("%f%% is a '%c%c'\n", percentage, grade, '+');
        
    } else if (percentage >= 70) {
        grade = 'B';
        printf("%f%% is a '%c'\n", percentage, grade);
        
    } else if (percentage >= 65) {
        grade = 'B';
        printf("%f%% is a '%c%c'\n", percentage, grade, '-');
        
    } else if (percentage >= 60) {
        grade = 'C';
        printf("%f%% is a '%c%c'\n", percentage, grade, '+');
        
    } else if (percentage >= 55) {
        grade = 'C';
        printf("%f%% is a '%c'\n", percentage, grade);
        
    } else if (percentage >= 50) {
        grade = 'C';
        printf("%f%% is a '%c%c'\n", percentage, grade, '-');
        
    } else {
        grade = 'D';
        printf("%f%% is a '%c'\n", percentage, grade);
    }

    return 0;
}

// result
// The user to input the percentage they scored in Practical Test 1. 
// The program should then output the corresponding letter grade.
