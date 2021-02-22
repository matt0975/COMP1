//
//  Daily10a.c
//  Daily01
//
//  Created by Matt Wagner on 2/18/21.
//
/*
#include <stdio.h>
void drawLine(int count, char ch);

void clearKeyboardBuffer()
{
    char ch;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        scanf("%c", &ch);
    }
    return;
}

void drawLine(int count, char ch)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
    return;
}

int main()
{
    char userChar;
    int userCount;
    userCount = 0;
    printf("Please enter the character you want to draw:\n");
    userChar = getchar();
    printf("Please enter the number of characters you want in your line:\n");
    scanf("%d", &userCount);
    // repeat until userCount is a valid input.
    while (userCount <= 1 || userCount >= 79)
    {
        printf("I'm sorry, that number is unrecognized or out of range, try [1-79]:\n");
        if(scanf("%d", &userCount) != 1)
        {
            while ((getchar()) != '\n');
            userCount = 0;
        }
    }
    drawLine(userCount, userChar);
    return 0;
}

*/
