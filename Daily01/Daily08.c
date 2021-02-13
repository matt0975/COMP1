/***********************************************
Author: Matthew Wagner
Date: 02/12/2021
Purpose: Use function to hold a while loop to allow an entered integer to count down from its current state to zero and count back to that entered number
Sources of Help: PDF and my brain
Time Spent: About 15 min
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
Date: 02/12/2021
Name: Matthew Wagner
***********************************************/

#include <stdio.h>
void loopDownToZero(int userNum);
void loopUpToInt(int userNum);

int main(int argc, char* argv[]){
    int number;
    printf("Please enter a positive integer: ");
    scanf("%d", &number);
    loopDownToZero(number);
    printf("****\n");
    loopUpToInt(number);
    
    return 0;
}

// loopDownToZero function
void loopDownToZero(int userNum){
    while(userNum >= 0){
        printf("%d\n", userNum);
        userNum -= 1;
    }
}

// loopUpToInt function
void loopUpToInt(int userNum){
    int number = 0;
    while(number != userNum){
        printf("%d\n", number);
        number += 1;
    }
    printf("%d\n", number);
}
