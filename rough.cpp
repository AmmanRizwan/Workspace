#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

void how_to_use();
void delay(int millisecond);
void typeTextWithDelay(const char *text, int typingSpeed);
void calculator();
void cal_fun();
void add_function();
void sub_function();
void mult_function();
void divide_function();
void printBorad();
void start();
void ttt();
void gotoxy(int x, int y);
void clrscr();
void intro();
void help_cmd();

int main()
{
    intro();
    string command;


    while (1)
    {
        cout << "$ ";
        getline(cin, command);

        if (command == "")
        {
            continue;
        }
        else if (command == "help" || command == "HELP")
        {
            help_cmd();
        }
        else if (command == "use" || command == "USE")
        {
            how_to_use();
        }
        else if (command == "cls" || command == "clear" || command == "CLS" || command == "CLEAR")
        {
            clrscr();
        }
        else if (command == "cmd" || command == "CMD")
        {
            intro();
        }
        else if (command == "cal" || command == "CAL")
        {
            calculator();
        }
        else if (command == "ttt" || command == "TTT")
        {
            ttt();
        }
        else if (command == "exit" || command == "EXIT")
        {
            break;
        }
        else
        {
            cout << "\'"
                 << command 
                 << "\' is not recognized as an internal or external command,"
                 << endl << "operable program or batch file." << endl << endl;
        }
    }
    return 0;
}

void gotoxy(int x, int y)
{
    printf("\033[%d;%dH", y, x);
}
void clrscr()
{
    system("cls");
}
void intro()
{
    cout << "Adam Ryzen CMD [Version 1.0.20.23.917] " 
         << "(c) Ryzen Corporation. All rights reserved.\n" 
         << "First of All To Know the program type \"use\" command." << "Type \"help\" for more information.\n" << endl;
}
void help_cmd()
{
    char line1[] = "For more infromation on a specific command, type HELP command-name\n";
    char line2[] = "CLEAR                Clear the Screen for Windows Commands.";
    char line3[] = "CLS                  Clear the Screen for Windows Commands.";
    char line4[] = "HELP                 Provides Help information for Windows commands.";
    char line5[] = "EXIT                 Quits the AR.EXE program (command interperter).";
    char line6[] = "TTT                  Play the Tic Tac Toe program(command interpter).";
    char line7[] = "CAL                  Simple Calculator program(command interperter).\n";
    char line8[] = "For more information on tools see the command-line reference in the online help.";

    int typingSpeed = 40;

    typeTextWithDelay(line1, typingSpeed);
    typeTextWithDelay(line2, typingSpeed);
    typeTextWithDelay(line3, typingSpeed);
    typeTextWithDelay(line4, typingSpeed);
    typeTextWithDelay(line5, typingSpeed);
    typeTextWithDelay(line6, typingSpeed);
    typeTextWithDelay(line7, typingSpeed);
    typeTextWithDelay(line8, typingSpeed);
    
}
void ttt()
{
        start();

    system("cls");
    int count = 0;
    printBorad();

    while (count <= 9)
    {
        int input1;
        int input2;
        gotoxy(0, 8);
        cout << "Enter Your Player X: ";
        cin >> input1;

        if (input1 == 7)
        {
            gotoxy(0, 2);
           cout << "X" << endl;
        }

        else if (input1 == 8)
        {
            gotoxy(3, 2);
            cout << "X" << endl;
        }


        else if (input1 == 9)
        {
            gotoxy(5, 2);
            cout << "X" << endl;
        }


        else if (input1 == 4)
        {
            gotoxy(1, 4);
            cout << "X" << endl;
        }


        else if (input1 == 5)
        {
            gotoxy(3, 4);
            cout << "X" << endl;
        }


        else if (input1 == 6)
        {
            gotoxy(5, 4);
            cout << "X" << endl;
        }


        else if (input1 == 1)
        {
            gotoxy(1, 6);
            cout << "X" << endl;
        }


        else if (input1 == 2)
        {
            gotoxy(3, 6);
            cout << "X" << endl;
        }


        else if (input1 == 3)
        {
            gotoxy(5, 6);
            cout << "X" << endl;
        }
        if (count == 8)
        {
            count += 3;
            continue;
        }

        gotoxy(0, 9);
        cout << "Enter Your Player O: ";
        cin >> input2;

        if (input2 == 1)
        {
            gotoxy(1, 6);
            cout << "O" << endl;
        }
        else if (input2 == 2)
        {
            gotoxy(3, 6);
            cout << "O" << endl;
        }
        else if (input2 == 3)
        {
            gotoxy(5, 6);
            cout << "O" << endl;
        }
        else if (input2 == 4)
        {
            gotoxy(1, 4);
            cout << "O" << endl;
        }
        else if (input2 == 5)
        {
            gotoxy(3, 4);
            cout << "O" << endl;
        }
        else if (input2 == 6)
        {
            gotoxy(5, 4);
            cout << "O" << endl;
        }
        else if (input2 == 7)
        {
            gotoxy(0, 2);
            cout << "O" << endl;
        }
        else if (input2 == 8)
        {
            gotoxy(3, 2);
            cout << "O" << endl;
        }
        else if (input2 == 9)
        {
            gotoxy(5, 2);
            cout << "O" << endl;
        }
        else
        {
            cout << "Invalid Input..." << endl;
            cout << endl << "Press Any Key To Exit..." << endl;
            getch();
            break;
        }

        count += 2;

    }

        gotoxy(0, 29);
        cout << "Press Any Key to Exit..\n";
        getch();

}
void printBorad()
{
    // Board of the tictactoe
    cout << "Use Your Numpad To Play This Game..." << endl;
    cout << " " << "|" << " " << "|" << " " << endl;
    cout << "-+-+-" << endl;
    cout << " " << "|" << " " << "|" << " " << endl;
    cout << "-+-+-" << endl;
    cout << " " << "|" << " " << "|" << " " << endl;
}
void start()
{
    // intro of the tic tac toe
    system("cls");
    gotoxy(42, 17);
    cout << "TIC TAC TOE GAME" << endl;
    gotoxy(38, 18);
    cout << "PRESS ANY KEY TO CONTINUE" << endl;
    gotoxy(30, 19);
    cout << "PLEASE USE YOUR NUMPAD NUMBER TO PLAY THE GAME." << endl;
    getch();
}
void calculator()
{

    system("cls"); // clear the screen before run the program
    cal_fun();
    int option; // declare the variable
    gotoxy(20, 10);
    cin >> option;

    switch (option) 
    {
        case 1:
        add_function();
        cout << endl;
        break;

        case 2:
        sub_function();
        cout << endl;
        break;

        case 3:
        divide_function();
        cout << endl;
        break;

        case 4:
        mult_function();
        cout << endl;
        break;

        default:
        cout << endl << "Invalid Input." << endl;
        break;
    }
}

void cal_fun()
{
    // intro of the calculator
    cout << "Simple Calculator..\n\n" << endl;
    cout << "Choose Your Option -> " << endl;
    cout << "1. Addition." << endl;
    cout << "2. Subrtaction." << endl;
    cout << "3. Division." << endl;
    cout << "4. Multiplication." << endl << endl;

    cout << "Enter Your Choice: " << endl;

}
void add_function() // add function of the calculator part
{
    int a, b, sum;
    system("cls");
    cout << "Addition..\n\n" << endl;
    cout << " " << " + " << " " << " = " <<  endl << endl;
    gotoxy(1, 4);
    cin >> a;

    gotoxy(5, 4);
    cin >> b;

    gotoxy(9, 4);
    sum = a + b;
    cout << sum << endl;
    cout << endl << "Press Any Key to Exit.. ";
    getch();
}
void sub_function() // sub function of the calculator part
{
    int a, b, diff;
    system("cls");
    cout << "Subtraction..\n\n" << endl;
    cout << " " << " - " << " " << " = " <<  endl << endl;
    gotoxy(1, 4);
    cin >> a;

    gotoxy(5, 4);
    cin >> b;

    gotoxy(9, 4);
    diff = a - b;
    cout << diff << endl;
    cout << endl << "Press Any Key to Exit.. ";
    getch();
}
void mult_function() // multi function of the calculator part
{
    int a, b, multi;
    system("cls");
    cout << "Multipication..\n\n" << endl;
    cout << " " << " * " << " " << " = " <<  endl << endl;
    gotoxy(1, 4);
    cin >> a;

    gotoxy(5, 4);
    cin >> b;

    gotoxy(9, 4);
    multi = a * b;
    cout << multi << endl;
    cout << endl << "Press Any Key to Exit.. ";
    getch();
}
void divide_function() // div function of the calculator part
{
    int num1, num2, quo, rem;

    system("cls");
    cout << "Division...\n\n" << endl;
    gotoxy(9, 4);
    cout << "-------" << endl;
    gotoxy(9, 5);
    cout << ")     (" << endl;
    gotoxy(11, 6);
    cout << "%" << "%" << endl;
    gotoxy(9, 7);
    cout << "_______" << endl << endl;


    gotoxy(8, 5);
    cin >> num2;
    gotoxy(11, 5);
    cin >> num1;

    quo = num1 / num2;
    rem = num1 % num2;
 
    gotoxy(17, 5);
    cout << quo;
    gotoxy(11, 8);
    cout << rem;
}

void delay(int millisecond) // function use to slow the text execution
{
    clock_t start_time = clock();
    while ((clock() - start_time) * 1000 / CLOCKS_PER_SEC < millisecond);
}

void typeTextWithDelay(const char *text, int typingSpeed) // function use to create a typing effect
{
    int textLength = 0;
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

void how_to_use() // intro of the cmd
{
    char str1[] = "These is the simple cmd program that is base on the command line which you can type after the symbol \"$\".";
    char str2[] = "It is represent that you can type any command that is in the help command line.\nIf you type the wrong command it will bool you.";
    char str3[] = "So type (help) command and use the the command the given command in the list of the type.";
    char str4[] = "\n So Have A Good Day with the Bad Day...";

    int typingSpeed = 20;

    typeTextWithDelay(str1, typingSpeed);
    typeTextWithDelay(str2, typingSpeed);
    typeTextWithDelay(str3, typingSpeed);
    typeTextWithDelay(str4, typingSpeed);
}