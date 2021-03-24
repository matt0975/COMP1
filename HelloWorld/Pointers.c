//
//  Pointers.c
//  HelloWorld
//
//  Created by Matt Wagner on 3/17/21.
//
/*
#include <stdio.h>
#include <stdlib.h>

void swapPassByValue(char ch1, char ch2);
void swapPassByReference(char *ch3, char *ch4);

int main(int argc, const char* argv[]){
    
    //char ch1 = 'x', ch2 = 'y';
    char ch3 = 'a', ch4 = 'b';
    
    //swapPassByValue(ch1, ch2);
    //printf("After swapPassByValue inside main(), ch1 = %c, ch2 = %c \n", ch1, ch2);
    
    swapPassByReference(&ch3, &ch4);
    printf("After swapPassByReference inside main(), ch3 = %c, ch4 = %c \n", ch3, ch4);
    return 0;
}

void swapPassByValue(char ch1, char ch2){
    char temp;
    
    temp = ch1;
    ch1 = ch2;
    ch2 = temp;
    printf("After swapping inside swapPassByValue, ch1 = %c, ch2 = %c \n", ch1, ch2);
}

void swapPassByReference(char *ch3, char *ch4){
    char temp;
    
    temp = *ch3;    // Dereference ch3
    *ch3 = *ch4;    // Dereference both ch3 and ch4
    *ch4 = temp;
    printf("After swapping inside swapPassByReference, ch3 = %c, ch4 = %c, pointer ch3 = %d, pointer ch4 = %d \n", *ch3, *ch4, ch3, ch4);
}
*/
