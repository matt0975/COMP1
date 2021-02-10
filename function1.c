//
//  function1.c
//  HelloWorld
//
//  Created by Matthew Wagner on 2/10/21.
//
#include <stdio.h>

// Step 3: Declare Function (writing the function prototype)
void drawHouse(void);
void drawFancyHouse(char aRoof);
void drawMultipleHouses(int totalHouses);

int main(int argc, const char* argv[]){
    
    // Step 1: Call/Invoke the function
    drawHouse();
    
    // Function with one parameter - parameter type is a character
    char roof;
    printf("Please enter a roof: ");
    scanf("%c", &roof);
    printf("You entered: %c\n", roof);
    drawFancyHouse(roof);
    
    drawMultipleHouses(4);
    
    return 0;
}


// Step 2: Define Function
void drawHouse(void){
    printf("/ \\\n");
    printf("|_|\n");
}

void drawFancyHouse(char aRoof){
    printf("/%c\\\n", aRoof);
    printf("|_|\n");
}

void drawMultipleHouses(int totalHouses){
    
}
