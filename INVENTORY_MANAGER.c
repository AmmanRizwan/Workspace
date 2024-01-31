/*

/////////////////////////////////////////////////////////////////
*****************************************************************
Author: AMMAN RIZWAN
Program: INVENT.C
Document: INVENTORY MANAGE TO SIMPLY ADD OR REMOVE FROM THE STOCK 
INVENTORY WITH THE EACH DIFFERENT ELEMENT OF THE PROGRAM --------
*****************************************************************
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

*/



// Header File Declaration started //

#include <stdio.h> // use input and output function
#include <conio.h> // use getch function 
#include <stdlib.h>
#include <string.h>
#include <time.h> // use the time and date
#define CLR system("cls"); // clear the screen

// Declartion Function started //

void delay(int millisecond);
void typeTextWithDelay(const char *text, int typingSpeed);
void display(); // function will display the top information
void start(); // Start the program for asking the user to input '\n' of '\r' Button
void inventery_manager(); // list of option in the program
int select_option(int option_no); 
void add_invent();
void list_invent();
void remove_invent();
void warning();
void location(int x, int y);

// Global Declartion of Variable

static int arr[6];
static int arr_add[6] = {10, 10, 10, 10, 10, 10};
char warning_string[] = "--WARNING-- THIS PROGRAM WILL NOT SAVE THE INFORMATION AFTER TERMINATING THE PROGRAM";

// Main Function Started

int main(void)
{
    start();
    display();
    inventery_manager();
    return 0;
}


void display() // Top and Bottom instruction display screen Function
{
    CLR
    location(1, 1);
    printf("FILE: %s", __FILE__);
    location(46, 1);
    printf("INVENTORY MANAGER");
    location(85, 1);
    printf("DATE AND TIME: %s, %s", __DATE__, __TIME__);
    location(1, 2);
    for (int i = 1; i <= 120; i++) printf("-");

    location(1, 29);
    for (int i = 1; i <= 120; i++) printf("-");
    location(1, 30);
    printf("%s", warning_string); // warning string
}

void start() // start display
{
    CLR
    int option;
    location(50, 15);
    char text[] = "INVENTORY MANAGER....";
    int typingSpeed = 7;

    typeTextWithDelay(text, typingSpeed);
    CLR
    location(50, 15);
    printf("Press Entry to Continue.");
    option = _getch();

    while (1)
    {
    if (option == '\n' || option == '\r')
    {
        break;
    }
    else
    {
        CLR
        printf("!!! Wrong !!! Response from the User :/");
        getch();
        exit(1);
    }
    }
}

void inventery_manager() // list of option to action
{
    display();
    int select;
    location(1, 4);
    printf("\n\n");
    printf("1-> ADD INVENTORY\n\n");
    printf("2-> REMOVE INVENTORY\n\n");
    printf("3-> STOCK INVENTORY\n\n");
    printf("4-> EXIT\n\n");
    printf("5-> WARNING\n\n");
    printf("Enter Option-> ");
   
    scanf("%d", &select);
    select_option(select);
}

int select_option(int option_no)
{
    if (option_no == 1)
    {
        int select1;
        CLR
        add_invent();
        location(1, 4);
        printf("\n\n");
        printf("0-> ARMOR           -   %d\n\n", arr_add[0]);
        printf("1-> SWORD           -   %d\n\n", arr_add[1]);
        printf("2-> BLADE           -   %d\n\n", arr_add[2]);
        printf("3-> KNIFE           -   %d\n\n", arr_add[3]);
        printf("4-> GUN             -   %d\n\n", arr_add[4]);
        printf("5-> SUB MACHINE GUN -   %d\n\n", arr_add[5]);
        printf("Enter the Option to increment the Stock Inventory:\n");
        scanf("%d", &select1);

if (arr_add[select1] <= 0) {
    printf("ADD INVENTORY IS EMPTY CANNOT REMOVE.");
} else {
    arr_add[select1] -= 1;
    
    if (arr[select1] > 10) {
        printf("ADD INVENTORY IS FULL CANNOT ADD.");
    } else {
        arr[select1] += 1;

        switch (select1) {
            case 0:
                printf("ARMOR INCREMENT IN THE STOCK INVENTORY");
                break;
            case 1:
                printf("SWORD INCREMENT IN THE STOCK INVENTORY");
                break;
            case 2:
                printf("BLADE INCREMENT IN THE STOCK INVENTORY");
                break;
            case 3:
                printf("KNIFE INCREMENT IN THE STOCK INVENTORY");
                break;
            case 4:
                printf("GUN INCREMENT IN THE STOCK INVENTORY");
                break;
            case 5:
                printf("SUB MACHINE GUN INCREMENT IN THE STOCK INVENTORY");
                break;
            default:
                printf("INVALID INPUT\n");
                break;
        }
    }
}

        getch();
        CLR
        inventery_manager();
    }
    else if (option_no == 2)
    {
        int select2;
        CLR
        remove_invent();
        location(1, 4);
        printf("\n\n");
        printf("0-> ARMOR              -    -1\n\n");
        printf("1-> SWORD              -    -1\n\n");
        printf("2-> SWORD              -    -1\n\n");
        printf("3-> KNIFE              -    -1\n\n");
        printf("4-> GUN                -    -1\n\n");
        printf("5-> SUB MACHINE GUN    -    -1\n\n");
        printf("Enter the Option to decrement the Stock Inventory:\n");
        scanf("%d", &select2);


switch (select2)
{
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        if (arr[select2] <= 0)
        {
            printf("STOCK INVENTORY IS EMPTY CANNOT REMOVE.");
        }
        else
        {
            arr[select2] -= 1;
            if (arr[select2] > 10)
            {
                printf("STOCK INVENTORY IS FULL CANNOT ADD.");
            }
            else
            {
                arr_add[select2] += 1;
                switch (select2)
                {
                case 0:
                    printf("ARMOR DECREMENT IN THE STOCK INVENTORY");
                    break;
                case 1:
                    printf("SWORD DECREMENT IN THE STOCK INVENTORY");
                    break;
                case 2:
                    printf("BLADE DECREMENT IN THE STOCK INVENTORY");
                    break;
                case 3:
                    printf("KNIFE DECREMENT IN THE STOCK INVENTORY");
                    break;
                case 4:
                    printf("GUN DECREMENT IN THE STOCK INVENTORY");
                    break;
                case 5:
                    printf("SUB MACHINE GUN DECREMENT IN THE STOCK INVENTORY");
                    break;
                }
            }
        }
        break;

    default:
        printf("INVALID INPUT\n");
        break;
}
        getch();
        CLR
        inventery_manager();
    }
    else if (option_no == 3)
    {
        CLR
        list_invent();
        location(1, 4);
        printf("\n\n");
        printf("0-> ARMOR           -   %d\n\n", arr[0]);
        printf("1-> SWORD           -   %d\n\n", arr[1]);
        printf("2-> SWORD           -   %d\n\n", arr[2]);
        printf("3-> KNIFE           -   %d\n\n", arr[3]);
        printf("4-> GUN             -   %d\n\n", arr[4]);
        printf("5-> SUB MACHINE GUN -   %d\n\n", arr[5]);
        
        printf("PRESS ANY KEY TO GO INVENTORY MANAGER\n");
        getch();
        CLR
        inventery_manager();
    }
    else if (option_no == 4)
    {
        char text[] = "PROGRAM EXITING THANKS FOR USE....";
        int typingSpeed = 5;

        typeTextWithDelay(text, typingSpeed);
        exit(1);
        CLR
    }
    else if (option_no == 5)
    {
        warning();
        location(1, 4);
        printf(" --- WARNING: DATA ERASURE UPON PROGRAM TERMINATION ---\n\n");
        printf("    Dear User,\n\n");
        printf("This program is designed to automatically erase data upon termination. Any unsaved or temporary data associated with the program will be permanently deleted\n\n");
        printf("    ---IMPORTANT---\n\n");
        printf("1. BACKUP YOUR DATA: Before running the program, ensure you have backed up critical information to prevent data loss.\n");
        printf("2. IRREVERSIBLE PROCESS: The data erasure is irreversible. Once the program concludes, the data cannot be recovered.\n");
        printf("3. UNDERSTAND THE IMPLICATIONS: Exercise caution and make sure you fully comprehend the consequences of running this program.\n\n");
        printf("If you have questions or concerns, contact our support team before proceeding.\n\n");
        printf("Thank you for your attention.\n\n");
        printf("    Sincerely,\n");
        printf("INVENTORY MANAGER\n\n\n");
        printf("PRESS ANY KEY TO GO INTO THE INVENTORY MANAGER\n");
        getch();
        inventery_manager();
    }
    else
    {
        CLR
        location(50, 15);
        printf("INVALID INPUT");
        location(45, 16);
        printf("PLEASE RESTART THE PROGRAM");

        location(50, 18);
        char text[] = "PROGRAM EXITING....";
        int typingSpeed = 5;

        typeTextWithDelay(text, typingSpeed);
        exit(1);
        CLR
    }
}

void add_invent()
{
    CLR
    location(1, 1);
    printf("FILE: %s", __FILE__);
    location(46, 1);
    printf("ADD INVENTORY");
    location(85, 1);
    printf("DATE AND TIME: %s, %s", __DATE__, __TIME__);
    location(1, 2);
    for (int i = 1; i <= 120; i++) printf("-");

    location(1, 29);
    for (int i = 1; i <= 120; i++) printf("-");
    location(1, 30);
    printf("%s", warning_string);
}

void list_invent()
{
    CLR
    location(1, 1);
    printf("FILE: %s", __FILE__);
    location(46, 1);
    printf("STOCK INVENTORY");
    location(85, 1);
    printf("DATE AND TIME: %s, %s", __DATE__, __TIME__);
    location(1, 2);
    for (int i = 1; i <= 120; i++) printf("-");

    location(1, 29);
    for (int i = 1; i <= 120; i++) printf("-");
    location(1, 30);
    printf("%s", warning_string);
}

void remove_invent()
{
    CLR
    location(1, 1);
    printf("FILE: %s", __FILE__);
    location(46, 1);
    printf("REMOVE INVENTORY");
    location(85, 1);
    printf("DATE AND TIME: %s, %s\n", __DATE__, __TIME__);
    location(1, 2);
    for (int i = 1; i <= 120; i++) printf("-");

    location(1, 29);
    for (int i = 1; i <= 120; i++) printf("-");
    location(1, 30);
    printf("%s", warning_string);
}

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

void warning()
{
    CLR
    location(1, 1);
    printf("FILE: %s", __FILE__);
    location(46, 1);
    printf("WARNING");
    location(85, 1);
    printf("DATE AND TIME: %s, %s", __DATE__, __TIME__);
    location(1, 2);
    for (int i = 1; i <= 120; i++) printf("-");

    location(1, 29);
    for (int i = 1; i <= 120; i++) printf("-");
    location(1, 30);
    printf("%s", warning_string);
}

void location(int x, int y)
{
    printf("\033[%d;%dH", y, x);
}