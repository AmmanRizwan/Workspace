#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int millisecond)
{
    clock_t start_time = clock();
    while ((clock() - start_time) * 1000 / CLOCKS_PER_SEC < millisecond);
}

void typeTextWithDelay(const char *text, int typingSpeed)
{
    int textLength = 0;

    // Calculate the length of the text
    while (text[textLength] != '\0') {
        textLength++;
    }

    for (int i = 0; i < textLength; i++)
    {
        putchar(text[i]);
        fflush(stdout);
        delay(1000 / typingSpeed);
    }

    putchar('\n');
}

int main()
{
    char text[] = "PROGRAM EXITING....";
    int typingSpeed = 10;

    typeTextWithDelay(text, typingSpeed);
    
    return 0;
}
