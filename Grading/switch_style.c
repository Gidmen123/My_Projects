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
    
   switch (grade)
   {
     case 80 ... 100 :
       printf("You got A\n");
       break;
     case 70 ... 79 :
     printf("You got B\n");
     break;
     case 65 ... 69 :
     printf("You got C\n");
     break;
     case 60 ... 64 :
     printf("You got D\n");
     break;
     case 50 ... 59 :
     printf("You got E\n");
     break;
     case 0 ... 49 :
     printf("You got F\n");
     break;
     default:
     printf("Invalid Response\n");
     break;
   }    
    return (0);
}
