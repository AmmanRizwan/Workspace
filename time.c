#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


void delay(int millisecond)
{
    clock_t start_time = clock();
    while ((clock() - start_time) * 1000 / CLOCKS_PER_SEC < millisecond);
}

int main()
{
    char text[] = "This is the String Use for the example of the time delay effect or typing effect";
    int textLength = sizeof(text) - 1;
    int typingSpeed = 20;

    for (int i = 0; i < textLength; i++)
    {
        putchar(text[i]);
        fflush(stdout);
        delay(1000 / typingSpeed);
    }

    putchar('\n');
    
    return 0;
}