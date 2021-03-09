//
//  more_function1.c
//  HelloWorld
//
//  Created by Matt Wagner on 3/3/21.
//
/*
#include <stdio.h>

double calcSum(double userNum1, double userNum2, double userNum3);
double inv(double num1);
double getMin(double a, double b);

int main(int argc, const char* argv[]){
    
    double num1 = 0, num2 = 0, num3 = 0, result = 0;
    
    printf("Please enter 3 numbers (Seperated by a space): ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    result = calcSum(num1, num2, num3);     // Result is the thing we are returning so we must assign it to the function
    printf("In main: result = %lf\n", result);
    
     
    // Find the Inverse of num
    double num = 4.99, result;
    result = inv(num);
    printf("Multiplicatibe inverse of 4.99 is: %lf\n", result);
    
    
    double x = 4.33, y = 0.34, result;
    result = getMin(x, y);
    printf("Result from getMin is: %lf", result);
    return 0;
}

double calcSum(double userNum1, double userNum2, double userNum3)
{
    // local variables are the parameters
    printf("In calcSum: userNum1 = %lf, userNum2 = %lf, userNum3 = %lf\n", userNum1, userNum2, userNum3);
    double sum = userNum1 + userNum2 + userNum3;
    printf("In calcSum: sum = %lf", sum);
    return sum;
}

double inv(double num1)
{
    //double inverse;
    //inverse = 1.0 / num1;
    //return inverse;
    return (1 / num1);
}

double getMin(double a, double b)
{
    //if(a >= b)
       //return b;
    //else
        //return a;
    return (a < b ? a : b); // ? compares the statement so if a<b is true you do that or false you return a or b depending on the minimum
}
*/
