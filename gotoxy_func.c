#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void gotoxy(int x, int y)
{
    printf("\033[%d;%dH", y, x);
}

int main()
{

    system("cls");
    gotoxy(10, 5);
    printf("Hello, World");
    getch();
    return 0;
}