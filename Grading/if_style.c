#include <stdio.h>

/**
 * main: School's grading system
 * Description: Using the school grading
 * system to determine the student's
 * grade
 * 80-100 = A
 * 70 -79 = B
 * 65-69 = C
 * 60-64 = D
 * 50-59 = E
 * below 50 = F
 * Return: 0 (if successful)
 */
 
int main() {
    int grade;
    /* Tell the user to input the score*/
    printf ("Please type your score:\n");
    /* Accept the user's input */
    
    scanf ("%d", &grade);
    
    /* Check if the grade is between 80 and 100, then print the specified grade */
    
    if (grade >= 80 && grade <= 100)
    {
        printf ("You got an A\n");
    }
    
    /* Check if the grade is between 70 and 79, then print the specified grade */
    
    else if (grade >= 70 && grade <= 79)
    {
        printf ("You got an B\n");
    }
    
    /* Check if the grade is between 65 and 69, then print the specified grade */
    
    else if (grade >= 65 && grade <= 69)
    {
        printf ("You got an C\n");
    }
    
    /* Check if the grade is between 60 and 64, then print the specified grade */
    
    else if (grade >= 60 && grade <= 64)
    {
        printf ("You got an D\n");
    }
    
    /* Check if the grade is between 50 and 59, then print the specified grade */
    
    else if (grade >= 50 && grade <= 59)
    {
        printf ("You got an E\n");
    }
    
    /* Check if the grade is between 0 and 50, then print the specified grade */
    
    else if (grade >= 0 && grade <= 50)
    {
        printf ("You got an F\n");
    }
    
    /* Output when the user's input is invalid */
    
    else
    {
        printf("You entered an invalid score");
    }
}
