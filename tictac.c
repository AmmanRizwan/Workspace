#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void printBoard();
void gotoxy(int x, int y);
void start();

int main()
{
    start();

    system("cls");
    int count = 1;
    printBoard();

    while (count <= 9)
    {
        int input1;
        int input2;
        gotoxy(0, 8);
        printf("Enter Your Player X: ");
        scanf("%d", &input1);

        if (input1 == 7)
        {
            gotoxy(0, 2);
           printf("X\n");
        }

        else if (input1 == 8)
        {
            gotoxy(3, 2);
            printf("X\n");
        }


        else if (input1 == 9)
        {
            gotoxy(5, 2);
            printf("X\n");
        }

        else if (input1 == 4)
        {
            gotoxy(1, 4);
            printf("X\n");
        }

        else if (input1 == 5)
        {
            gotoxy(3, 4);
            printf("X\n");
        }

        else if (input1 == 6)
        {
            gotoxy(5, 4);
            printf("X\n");
        }

        else if (input1 == 1)
        {
            gotoxy(1, 6);
            printf("X\n");
        }

        else if (input1 == 2)
        {
            gotoxy(3, 6);
            printf("X\n");
        }

        else if (input1 == 3)
        {
            gotoxy(5, 6);
            printf("X\n");
        }

        gotoxy(0, 9);
        printf("Enter Your Player O: ");
        scanf("%d", &input2);

        if (input2 == 1)
        {
            gotoxy(1, 6);
            printf("O\n");
        }
        else if (input2 == 2)
        {
            gotoxy(3, 6);
            printf("O\n");
        }
        else if (input2 == 3)
        {
            gotoxy(5, 6);
            printf("O\n");
        }
        else if (input2 == 4)
        {
            gotoxy(1, 4);
            printf("O\n");
        }
        else if (input2 == 5)
        {
            gotoxy(3, 4);
            printf("O\n");
        }
        else if (input2 == 6)
        {
            gotoxy(5, 4);
            printf("O\n");
        }
        else if (input2 == 7)
        {
            gotoxy(0, 2);
            printf("O\n");
        }
        else if (input2 == 8)
        {
            gotoxy(3, 2);
            printf("O\n");
        }
        else if (input2 == 9)
        {
            gotoxy(5, 2);
            printf("O\n"); 
        }
        else
        {
            printf("Invalid Input...\n\n");
            printf("Press Any Key To Exit...\n");
            getch();
            break;
        }
        count += 2;

    }

    gotoxy(0, 29);
    printf("Press Any Key to Exit..");
    getch();
    return 0;
}

void printBoard()
{
    printf("Use Your Numpad To Play This Game..\n");
    printf(" | | \n");
    printf("-+-+-\n");
    printf(" | | \n");
    printf("-+-+-\n");
    printf(" | | \n");
}


void gotoxy(int x, int y)
{
    printf("\033[%d;%dH", y, x);
}

void start()
{
    system("cls");
    gotoxy(42, 17);
    printf("TIC TAC TOE GAME\n");
    gotoxy(38, 18);
    printf("PRESS ANY KEY TO CONTINUE\n");
    gotoxy(30, 19);
    printf("PLEASE USE YOUR NUMPAD NUMBER TO PLAY THE GAME.\n");
    getch();
}