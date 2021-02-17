//
//  for_loop.c
//  HelloWorld
//
//  Created by Matt Wagner on 2/16/21.
//

#include <stdio.h>

void exit(int status);
void clearKeyboardBuffer(void);
void drawHouse(void);
void drawMultipleHouses_for(int totalHouses);

int main(int argc, const char* argv[]){
    
    drawMultipleHouses_for(3);
    /*int input, numOfConversion;
    printf("Please enter 100: ");
    numOfConversion = scanf("%d", &input);
    clearKeyboardBuffer();
    //printf("You entered %d", input);          // This is to show how clearKeyboardBuffer() works
    
    while(numOfConversion == 0 || input != 100){
        printf("I'm sorry, you must enter 100: ");
        numOfConversion = scanf("%d", &input);
        clearKeyboardBuffer();
 //       if(numOfConversion == 0){
 //           printf("No input, exit program\n");       //Enter anything other than decimal to exit
 //           exit(0);
 //       }
    }
    printf("You entered %d\n", input);
     

    // SCAN MULTIPLE INPUTS
    int num1 = -9999, num2 = -9999, numOfCon;
    
    printf("Please enter 2 integers (seperated by a space): ");
    numOfCon = scanf("%d %d", &num1, &num2);            //Scanf scans in until a character is typed
    printf("%d numbers read from the keyboard: %d and %d.\n", numOfCon, num1, num2);
    clearKeyboardBuffer();
    
*/
    return 0;
}

void drawHouse()
{
    printf("/ \\\n");
    printf("|_|\n\n");
}

void drawMultipleHouses_for(int totalHouses)
{
    int loop_counter;
    for(loop_counter = 0; loop_counter <= totalHouses; loop_counter++)
    {
        drawHouse();
    }
}

//Want this after each scanf to prevent inifinite loops
void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    
    //Keep reading until we reach a new line or a "null" character
    while(ch != '\n' && ch != '\0'){
        scanf("%c", &ch);
    }
}


