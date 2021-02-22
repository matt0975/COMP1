/***********************************************
Author: Matthew Wagner
Date: 02/16/2021
Purpose: Practice loops more and get fimilar with the clearBuffer
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
Date: 02/16/2021
Name: Matthew Wagner
***********************************************/
/*
#include <stdio.h>

int getNegInt (void);
void clearKeyboardBuffer(void);

int main(int argc, const char * argv[]){

   getNegInt();


 return 0;
}

int getNegInt (void){
   int inputNum, num;
    //printf("Please enter a negative number:\n");
   inputNum = scanf("%d", &num);
   //printf("%d\n", inputNum);

   while (inputNum == 0 || num >= 0){
      printf("I'm sorry, you must enter a negative integer less than zero:\n");
      inputNum= scanf("%d",&num);
      //printf("%d\n", num);

      clearKeyboardBuffer();
}
printf("I got the number %d!\n", num);
   return num;
   }

void clearKeyboardBuffer(void) {
    char ch;
    scanf("%c", &ch);
    while (ch != '\n' && ch != '\0') {
       scanf("%c", &ch);
    }
 }
*/
