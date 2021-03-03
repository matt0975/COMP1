/***********************************************
Author: Matthew Wagner
Date: 02/26/2021
Purpose: Practice for loops more and get fimilar with printing characters
Sources of Help: PDF and my brain
Time Spent: About 1 hour
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
Date: 02/26/2021
Name: Matthew Wagner
***********************************************/

/*
 First of all, declaring variables outside of main() so that all functions in the file can access it is not a good practice. Unless you really need to declare those variables as ‘global’, they should not be outside of main().
  
 Now, look at the excerpt above. It says, the getThrow() should be given a player. Inside the function, you will ask that player to provide an input and once you get a valid input, you return that input.
  
 Your checkWinner() function will be given the 2 throws of the 2 players which means it should have 2 arguments carrying these 2 pieces of info.
  
 In your getThrow() and checkWinner() functions, there are no arguments in either one of them. You are not following instructions.
 

#include <stdio.h>

void clearKeyboardBuffer(void);
int checkWinner(char ch1, char ch2);
int getThrow(char ch1);
int win;

    int main(int argc, const char* argv[])
    {
   
        int gt1 = getThrow(1);
        int gt2 = getThrow(2);
        checkWinner(gt1, gt2);
    }

int getThrow(char ch1){
    printf("Player-%d, please enter your choice <p>aper, <r>ock, or <s>cissors:\n", ch1);
    scanf(" %c", &ch1);
    clearKeyboardBuffer();
    //printf("%c\n", ch1);
    
    
     
     
    return ch1;
}


int checkWinner(char ch1, char ch2){
    if (ch1 == ch2) {
    win = printf("Draw, nobody wins.\n");
    }
    else if (ch1 == 'P' || ch1 == 'p') {
    if (ch2 == 'R' || ch2 == 'r') {
    win = printf("Player-1 wins! Paper covers rock!\n");
    }
    else {
    win = printf("Player-2 wins! Scissors cut paper!\n");
    }
    }
    else if (ch1 == 'S' || ch1 == 's') {
    if (ch2 == 'P' || ch2 == 'p') {
    win = printf("Player-1 wins! Scissors cut paper!\n");
    }
    else {
    win = printf("Player-2 wins! Rock breaks scissors!\n");
    }
    }
    else if (ch1 == 'r' || ch1 == 'R') {
    if (ch2 == 'S' || ch2 == 's') {
    win = printf("Player-1 wins! Rock breaks scissors!\n");
    }
    else {
    win = printf("Player-2 wins! Paper covers rock!\n");
    }
    }
    return win;
}


void clearKeyboardBuffer(void) {
    char ch;
    scanf("%c", &ch);
    while (ch != '\n' && ch != '\0') {
       scanf("%c", &ch);
   }
}
*/
