//
//  Daily14.c
//  Daily01
//
//  Created by Matt Wagner on 3/3/21.
//

#include<stdio.h>
#include<ctype.h>

void clearKeyboardBuffer(void);

enum Choice { ROCK = 'R', PAPER = 'P', SCISSORS = 'S', };

char playerChoice1;
char playerChoice2;
void checkWinner(void);
void getThrow(void);



int main(int argc, const char* argv[]) {
        getThrow();
        checkWinner();
    
        return 0;
}

void getThrow(void) {
    printf("Player-1, please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
    scanf("%c", &playerChoice1);
    clearKeyboardBuffer();
    printf("Player-2, please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
    scanf("%c", &playerChoice2);
    clearKeyboardBuffer();

    playerChoice1 = toupper(playerChoice1);
    playerChoice2 = toupper(playerChoice2);
}

void clearKeyboardBuffer() {
    char ch;
    do {
        scanf("%c", &ch);
    } while (ch != '\n' && ch != '\0');
}

void checkWinner(void) {
    switch (playerChoice1) {
    case 'R':
        switch (playerChoice2) {
        case 'S':
            printf("Player-1 wins! Rock breaks scissors!\n");
            break;
        case 'P':
            printf("Player-2 wins! Paper covers rock!\n");
            break;
        case 'R':
            printf("Draw, nobody wins.\n");
            break;
        }
        break;


    case 'P':
        switch (playerChoice2) {
        case 'S':
            printf("Player-2 wins! Scissors cut paper!\n");
            break;
        case 'P':
            printf("Draw, nobody wins.\n");
            break;
        case 'R':
            printf("Player-1 wins! Paper covers rock!\n");
            break;
        }
        break;

    case 'S':
        switch (playerChoice2) {
        case 'S':
            printf("Draw, nobody wins.\n");
            break;
        case 'P':
            printf("Player-1 wins! Scissors cut paper!\n");
            break;
        case 'R':
            printf("Player-2 wins! Rock breaks scissors!\n");
            break;
        }
        break;
    }
}
