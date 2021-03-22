/***********************************************
Author: Matthew Wagner
Date: 03/21/2021
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
 
 Date: 03/21/2021
 Name: Matthew Wagner
 */

#include <stdio.h>

const double interestRate = 1.5;
const double monthlyPayment = 50.0;

int main()
{
   double cost;

   while(1) {
      printf("Enter the cost (>500.00):\n");
      scanf("%lf", &cost);

      if (cost > 500) {
         break;
      }
      else {
         continue;
      }
   }

   int months = 0;
   double totalInterestPaid = 0.0;

   while(1) {
      double currentInterest = (interestRate * cost) / 100.0;
      cost = cost + currentInterest;
      totalInterestPaid += currentInterest;

      if (cost > monthlyPayment) {
         months ++;
         cost = cost - monthlyPayment;
      }
      else {
         break;
      }
   }

   if (cost > 0.0) {
      months++;
   }

   printf("It takes %d months to pay off the loan.\n", months);
   printf("The total amount of interest paid is:%.2lf.\n", totalInterestPaid);
   printf("The amount of final payment is:%.2lf.", cost);

   return 0;
}
