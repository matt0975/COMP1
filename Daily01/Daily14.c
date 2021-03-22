/***********************************************
Author: Matthew Wagner
Date: 03/08/2021
Purpose: Get familar with enum and switch statements
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
Date: 03/08/2021
Name: Matthew Wagner
***********************************************/

#include<stdio.h>

int checkWinner(char ch1, char ch2);
int getThrow(int playerName);
void clearKeyboardBuffer(void);

typedef enum { ROCK = 'R', PAPER = 'P', SCISSORS = 'S', } Choice;
Choice pChoice;

int main(int argc, const char* argv[])
{
    int gt1 = getThrow(1);
    int gt2 = getThrow(2);
    checkWinner(gt1, gt2);
    
    return 0;
}

int getThrow(int playerName) {
    char ch1 = 'l';
    while (ch1 != 'r' && ch1 != 'R' && ch1 != 'p' && ch1 != 'P' && ch1 != 's' && ch1 != 'S'){
          printf("Player-%d, please enter your choice <p>aper, <r>ock, or <s>cissors:\n", playerName);
          scanf(" %c", &ch1);
          clearKeyboardBuffer();
          //printf("%d\n", ch1);
    }
    switch (ch1) {
            case 'R':
                ch1 = ROCK;
                break;
            case 'r':
                ch1 = ROCK;
                break;
           
            case 'P':
                ch1 = PAPER;
                break;
            case 'p':
                ch1 = PAPER;
                break;

            case 'S':
                ch1 = SCISSORS;
                break;
            case 's':
                ch1 = SCISSORS;
                break;
                }
    return ch1;
}

int checkWinner(char ch1, char ch2) {
    int win = 0;
    if (ch1 == ch2) {
        win = printf("Draw, nobody wins.\n");
        }
        else if (ch1 == PAPER) {
        if (ch2 == ROCK) {
        win = printf("Player-1 wins! Paper covers rock!\n");
        }
        else {
        win = printf("Player-2 wins! Scissors cut paper!\n");
        }
        }
        else if (ch1 == SCISSORS) {
        if (ch2 == PAPER) {
        win = printf("Player-1 wins! Scissors cut paper!\n");
        }
        else {
        win = printf("Player-2 wins! Rock breaks scissors!\n");
        }
        }
        else if (ch1 == ROCK) {
        if (ch2 == SCISSORS) {
        win = printf("Player-1 wins! Rock breaks scissors!\n");
        }
        else {
        win = printf("Player-2 wins! Paper covers rock!\n");
        }
        }
        
        return win;
    
}

void clearKeyboardBuffer() {
    char ch;
    do {
        scanf("%c", &ch);
    } while (ch != '\n' && ch != '\0');
}
