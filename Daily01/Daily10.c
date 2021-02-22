/***********************************************
Author: Matthew Wagner
Date: 02/18/2021
Purpose: Practice for loops more and get fimilar with printing characters
Sources of Help: PDF and my brain
Time Spent: About 20 min
***********************************************/

/***********************************************
Computing I -- COMP.1010 Honor Statement
The practice of good ethical behavior is essential for maintaining good order in the classroom,
providing an enriching learning experience for students, and as training as a practicing
computing professional upon graduation. This practice is manifested in the University's
Academic Integrity policy. Students are expected to strictly avoid academic dishonesty and
adhere to the Academic Integrity policy as outlined in the course catalog. Violations will be
dealt with as outlined therein.
All programming assignments in this class are to be done by the student alone. No outside help is
permitted except the instructor and approved tutors.
I certify that the work submitted with this assignment is mine and was generated in a manner
consistent with this document, the course academic policy on the course website on Blackboard,
and the UMass Lowell academic code.
Date: 02/18/2021
Name: Matthew Wagner
***********************************************/

#include <stdio.h>
void clearKeyboardBuffer(void);
void drawLine(int count, char ch);

int main(int argc, char * argv[]){
    //getNumChar();
    char userChar;
    int userCount = 0;
    printf("Please enter the character you want to draw:\n");
    userChar = getchar();
    printf("Please enter the number of characters you want in your line:\n");
    scanf("%d", &userCount);
    
    while(userCount >= 79 || userCount <= 0){
        printf("I'm sorry, that number is unrecognized or out of range, try [1-79]:\n");
        if(scanf("%d", &userCount) != 1){
            while ((getchar() != '\n')){
                userCount = 0;
            }
        }
        //clearKeyboardBuffer();
    }
    drawLine(userCount, userChar);
    return 0;
}

void drawLine(int count, char ch){
    for(int input = 0; input < count; input++)
    {
        printf("%c", ch);
    }
    printf("\n");
    return;
}

void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    
    //Keep reading until we reach a new line or a "null" character
    while(ch != '\n' && ch != '\0'){
        scanf("%c", &ch);
    }
}
