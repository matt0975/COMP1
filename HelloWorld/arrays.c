//
//  arrays.c
//  HelloWorld
//
//  Created by Matt Wagner on 3/24/21.
//

#include <stdio.h>
#define SIZE 5
#define NUM_ELEMENTS 3
#define ARRAY_SIZE 5
void printElement(int element);

int main(int argc, const char* argv[]){
    /*
    int square[SIZE];
    
    // square i and print each square
    for(int i = 0; i < SIZE; i++){
        square[i] = i * i;
        printf("%d ", square[i]);
    }
    
    
    // Swapping
    printf("\nBefore swapped 1st and last element in the array!: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", square[i]);
    }
    printf("\n");
    
    int temp;
    temp = square[0];
    square[0] = square[SIZE - 1]; // SIZE - 1 gets the last element
    square[SIZE - 1] = temp;
    printf("After swapped 1st and last element in the array!: ");
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ", square[i]);
    }
    printf("\n");
    
    
    // Swapping 2nd and 2nd to last
    printf("\nBefore swapped 2nd and 2nd to last element in the array!: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", square[i]);
    }
    printf("\n");
    
    int temp;
    temp = square[1];
    square[1] = square[SIZE - 2]; // SIZE - 1 gets the last element
    square[SIZE - 2] = temp;
    printf("After swapped 2nd and 2nd to last element in the array!: ");
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ", square[i]);
    }
    printf("\n");
    
    //Method One = specify the size, and then initialize it with values on the same line
    int userVal[5] = { 1, 2, 3};
    
    //Method Two = the initialized vales determine size
    int userVals[] = { 1, 2, 3, 4, 5};
    
    
    int userVals[NUM_ELEMENTS];
    
    for(int i = 0; i < NUM_ELEMENTS; i++){
        printf("Please enter a value: ");
        scanf("%d", &userVals[i]);
    }
    for(int i = 0; i < NUM_ELEMENTS; i++){
        printf("userVal[%d] = %d \n", i, userVals[i]);
    }
    */
    
    // PassByValue Print
    int arr[ARRAY_SIZE] = { 56, 12, 78, 100, 102 };
    
    for(int i=0; i < ARRAY_SIZE; i++){
        printElement(arr[i]);
    }
    printf("\n");
    
    return 0;
}

void printElement(int element){
    printf("%5d ", element);    // Gives 5 spaces to make columns
}
