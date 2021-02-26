//
//  mixed_datatypes1.c
//  HelloWorld
//
//  Created by Matt Wagner on 2/24/21.
//

#include <stdio.h>
void clearKeyboardBuffer(void);

int main(int argc, const char* argv[])
{
/*
    double realNum = 12345.678;
    
    printf("float: %f\n", realNum);
    printf("long float: %lf\n", realNum);
    printf("%e\n", realNum);
    printf("g: %g\n",realNum);
    printf("d: %d\n",realNum);
    
     
    int numScore = 0;
    double totalScore, average;
    
    printf("Please enter total score (must be > 0): ");
    scanf("%lf", &totalScore);
    clearKeyboardBuffer();
    printf("\nPlease enter number of scores (must be > 0): ");
    scanf("%d", &numScore);
    clearKeyboardBuffer();
    
    while(numScore <= 0 || totalScore <= 0){
        printf("Please enter total score (must be > 0): ");
        scanf("%lf", &totalScore);
        clearKeyboardBuffer();
        printf("\nPlease enter number of scores (must be > 0): ");
        scanf("%d", &numScore);
        clearKeyboardBuffer();          // Clear keyboard after every scanf
    }
    
    average = totalScore / numScore;        //if total score was an int, cast it as a double to fix
    printf("Your average is %0.2lf\n", average);    // 0.2lf means print 2 decimal places
*/
    printf("I'm printing a character using '%c' using the capital letter A.\n", 'A');
    printf("I'm printing a character using '%c' using the capital letter A.\n", 65);

    printf("%c's ASCII code is %d.\n", 'A', 65);
    printf("%c's ASCII code is %d.\n", 65, 65);
    printf("%c's ASCII code is %d.\n", 'A', 'A');
    
    return 0;
}

void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    
    //Keep reading until we reach a new line or a "null" character
    while(ch != '\n' && ch != '\0'){
        scanf("%c", &ch);
    }
}

