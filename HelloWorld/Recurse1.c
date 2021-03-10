//
//  Recurse1.c
//  HelloWorld
//
//  Created by Matt Wagner on 3/10/21.
//

#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main(int argc, const char* argv[]){
    int fact, x = 5;
    fact = factorial(x);
    printf("Factorial of %d is %d\n",x, fact);
    
    return 0;
}

/*
// Non-Recursive
int factorial(int num){
    int product = 1;
    for(int i = 1; i<=num; i++){
        product *= i;
    }
    return product;
}
*/

// Recursive (5 * 4 * 3 * 2 * 1 = 120)
int factorial(int num){
    if(num <= 1)
        return 1;
    return (num * factorial(num - 1));
}
