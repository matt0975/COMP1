/***********************************************
Author: Matthew Wagner
Date: 03/25/2021
Purpose:
Sources of Help: PDF and my brain
Time Spent: About 1 hour
***********************************************/

/*
 Computing I -- COMP.1010 Honor Statement
 
 The practice of good ethical behavior is essential for maintaining
 good order in the classroom, providing an enriching learning
 experience for students, and as training as a practicing computing
 professional upon graduation.  This practice is manifested in the
 University’s Academic Integrity policy. Students are expected to
 strictly avoid academic dishonesty and adhere to the Academic
 Integrity policy as outlined in the course catalog.  Violations
 will be dealt with as outlined therein.
 
 All programming assignments in this class are to be done by the
 student alone.  No outside help is permitted except the instructor
 and approved tutors.
 
 I certify that the work submitted with this assignment is mine and
 was generated in a manner consistent with this document, the
 course academic policy on the course website on Blackboard, and
 the UMass Lowell academic code.
 
 Date: 03/25/2021
 Name: Matthew Wagner
 */

#include <stdio.h>

void convertLengths(void);
void convertWeights(void);
void Exit(void);

int main() {

   int ch;

   do {
      printf("1. convert lengths\n");
      printf("2. convert weights\n");
      printf("0. Exit\n");
      printf("Please choose from (1, 2, 0):\n");
      scanf("%d", &ch);

      switch(ch) {

         case 1:
         convertLengths();
         break;

         case 2:
         convertWeights();
         break;

         case 0:
         Exit();
      }
   }
   while (ch != 0);
}

void convertLengths(void) {
   printf("The user wants to convert lengths.\n\n\n");
}

void convertWeights(void) {
   printf("The user wants to convert weights.\n\n\n");
}

void Exit(void) {
   printf("User chose to exit.\n");
}
