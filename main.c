// keep the three files in the same folder
// if code runner does not work try the following command in the terminal
// gcc main.c alphabets.c -o starText
// actually we need to run both the files at the same time to keep the integration so the code runner will not work
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "alphabet_header.h"
int main()
{
    int row = 7;
    int column = row - 2;
    int printNum;
    // printf("How many characters do you want to print:");
    // scanf("%d", &printNum);
    // char inp[] = "ANSTUVY";
    char inp[20];
    // gets(inp);
    printf("Enter your String in CAPITAL letters - underscore for space ^_^ :\n");
    scanf("%s", inp);
    for (int i = 1; i <= row; i++)
    {
        for (int k = 0; k < strlen(inp); k++)
        {
            char hold = inp[k];


            switch (hold)
            {
            case 'A':
                printA(row, i);
                break;
            case 'B':
                printB(row, i);
                break;
            case 'C':
                printC(row, i);
                break;
            case 'D':
                printD(row, i);
                break;
            case 'E':
                printE(row, i);
                break;
            case 'F':
                printF(row, i);
                break;
            case 'G':
                printG(row, i);
                break;
            case 'H':
                printH(row, i);
                break;
            case 'I':
                printI(row, i);
                break;
            case 'J':
                printJ(row, i);
                break;
            case 'K': 
                printK(row, i);
                break;
            case 'L':
                printL(row, i);
                break;
            case 'M':
                printM(row, i);
                break;
            case 'N':
                printN(row, i);
                break;
            case 'O':
                printO(row, i);
                break;
            case 'P':
                printP(row, i);
                break;
            case 'Q':
                printQ(row, i);
                break;
            case 'R':
                printR(row, i);
                break;
            case 'S':
                printS(row, i);
                break;
            case 'T':
                printT(row, i);
                break;
            case 'U':
                printU(row, i);
                break;
            case 'V':
                printV(row, i);
                break;
            case 'W':
                printW(row, i);
                break;
            case 'X':
                printX(row, i);
                break;
            case 'Y':
                printY(row, i);
                break;
            case 'Z':
                printZ(row, i);
                break;
            case '_':
                printf("      ");
            default:
                // printf("do it");
                break;
            }
        }
        printf("\n");
    }

    getch();
    return 0;
} 