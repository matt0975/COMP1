//
//  variable1.c
//  HelloWorld
//
//  Created by Matthew Wagner on 2/5/21.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    
    int userNum;
    
    printf("Please enter an integer: ");
    scanf("%d", &userNum);
    printf("You entered: %d\n", userNum);
    printf("%d squared is %d\n", userNum, userNum * userNum);
    
    int num1, num2;
    
    printf("Please Enter num1 & num2 (seperated by a space): ");
    scanf("%d %d", &num1, &num2);
    printf("You just entered num1: %d, num2: %d\n", num1, num2);
    
    return 0;
}
