/***********************************************
Author: Matthew Wagner
Date: 03/12/2021
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
Date: 03/12/2021
Name: Matthew Wagner
***********************************************/

#include<stdio.h>

int getPosInt() {
   int n;

   scanf("%d", &n);
   if(n > 0)
      return n;

   return 0;
}

int getGCD(int a, int b) {
   if(a == 0)
      return b;
   return getGCD(b % a, a);
}

int main() {
   int n, m, gcd;

   while(1) {
      printf("Please enter a positive integer:\n");
      n = getPosInt();
      if(n > 0)
         break;
      else
         printf("I'm sorry, that number is unrecognized or not positive.\n");;
   }

   while(1) {
      printf("Please enter a second positive integer:\n");
      m = getPosInt();
      if(m > 0)
         break;
      else
         printf("I'm sorry, that number is unrecognized or not positive.\n");;
   }
   gcd = getGCD(m, n);
   printf("The largest integer that divides both %d and %d is: %d\n", n, m, gcd);
}
