/*main.c version 1*/

#define _CRT_SECURE_NO_WARNINGS // Disable security warnings in Visual Studio.  
#include "fundamentals.h" // Include the header file for fundamentals module 
#include "manipulating.h" // Include the header file for manipulating module. 
#include "converting.h" // Include the header file for manipulating module. 
#include "tokenizing.h" // Include the header file for tokenzing module. 

int main (void) // The main function, entry point of the program. 
{
        char buff[10]; // Declare a character array (buffer) with space for 10 elements. 
        do // Begin a do-while loop that will execute at least once before checking the condition. 
        {
                printf("1 - Fundamentals\n"); // Outputs the string "1 - Fundamentals" followed by a newline to the console. 
                printf("2 - Manipulation\n"); // Prints: 2 - Manipulation on the console, followed bt a newline. 
                printf("3 - Converting\n"); //  Prints: 3 - Converting on the console, followed bt a newline. 
                printf("4 - Tokenizing\n"); // Prints: 4 - Tokenizing on the console, followed bt a newline. 
                printf("0 - Exit\n");  // Prints: 0 - Exit on the console, followed by a newline. 
                printf("Which module to run? \n"); // Prints: which module to run? and moves to the next line. 
                fgets (buff, 10, stdin); // Reads up to 9 characters from the user input and stores them in the 'buff' array.
                switch  (buff [10]) // Switch statement that evaluates the value at index 10 of the 'buff' array 
                {
                case '1': fundamentals (); Executes the 'fundamentals()' function if 'buff[10]' us eqyal to '1'
                    break; // Exits the current loop or switch and transfers control to the next statement after it. 
                case '2': manipulating (); // Executes the 'manipulating()' function if 'buff[10]' is equal to '2'. 
                    break; // Exits the current loop switch and transfers control to the mext statement after it. 
                case '3': converting (); // Executes the 'converting()' function if 'buff[10]' is equal to '3' 
                    break; // Exits the current loop or switch and transfers controls to the next statement after it. 
                case '4': tokenizing (); // Executes the 'tokenzing()' function if 'buff[10]' is equal to '4'
                    break; // Exits the current loop or switch statement, transferring control to the following the loop or switch 
                }
        }
} while (buff[0] != '0'); // Continues the loop until the first character of 'buff' is '0', which breaks the loop
return 0; // Exits the main function and returns a status code of 0, indicating successful execution 
}


/*main.c version 2*/

#define _CRT_SECURE_NO_WARNINGS // Disables security warnings in Visual Studio.
#include "fundamentals.h"  // Include the header file for fundamentals module
#include "manipulating.h"   // Include the header file for manipulating module.
#include "converting.h"     // Include the header file for converting module.
#include "tokenizing.h"     // Include the header file for tokenizing module.

int main(void)  // The main function, entry point of the program.
{
    char buff[10];  // Declare a character array (buffer) with space for 10 elements.
    do  // Begin a do-while loop that will execute at least once before checking the condition.
    {
        printf("1 - Fundamentals\n");  // Prints options to the user.
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");

        fgets(buff, 10, stdin);  // Reads up to 9 characters from user input and stores them in 'buff'.

        switch (buff[0])  // Switch statement that evaluates the first character of 'buff'.
        {
        case '1': 
            fundamentals();  // Calls the 'fundamentals()' function if the input is '1'.
            break;  // Exits the switch statement.

        case '2': 
            manipulating();  // Calls the 'manipulating()' function if the input is '2'.
            break;  // Exits the switch statement.

        case '3': 
            converting();  // Calls the 'converting()' function if the input is '3'.
            break;  // Exits the switch statement.

        case '4': 
            tokenizing();  // Calls the 'tokenizing()' function if the input is '4'.
            break;  // Exits the switch statement.

        case '0':
            printf("Exiting the program...\n");  // Prints exit message if the user chooses to quit.
            break;  // Exits the switch and breaks out of the loop.

        default:
            printf("Invalid option. Please enter a valid number.\n");  // Handles invalid input.
            break;
        }
    } while (buff[0] != '0');  // Loop continues until '0' is entered to exit.

    return 0;  // Exits the main function and returns a status code of 0 (indicating successful execution).
}


/*Version 3*/
#define _CRT_SECURE_NO_WARNINGS // Disable security warnings in Visual Studio.
#include "fundamentals.h"   // Include the header file for fundamentals module.
#include "manipulating.h"    // Include the header file for manipulating module.
#include "converting.h"      // Include the header file for converting module.
#include "tokenizing.h"      // Include the header file for tokenizing module.

// Function to display the main menu to the user
void display_menu(void) {
    printf("1 - Fundamentals\n");   // Option to run the fundamentals module
    printf("2 - Manipulation\n");   // Option to run the manipulation module
    printf("3 - Converting\n");     // Option to run the converting module
    printf("4 - Tokenizing\n");     // Option to run the tokenizing module
    printf("0 - Exit\n");           // Option to exit the program
    printf("Which module to run? \n");  // Prompt the user to select a module
}

int main(void) {  // Main function: the entry point of the program.
    char buff[10];  // Declare a character array (buffer) with space for 10 elements.

    do {  // Begin a do-while loop that will execute at least once before checking the condition.
        display_menu();  // Call the function to display the menu.
        
        fgets(buff, sizeof(buff), stdin);  // Read up to 9 characters from user input and store them in 'buff'.

        // Switch statement evaluates the first character of 'buff'.
        switch (buff[0]) {
        case '1': 
            fundamentals();  // Calls the 'fundamentals()' function if the input is '1'.
            break;

        case '2': 
            manipulating();  // Calls the 'manipulating()' function if the input is '2'.
            break;

        case '3': 
            converting();  // Calls the 'converting()' function if the input is '3'.
            break;

        case '4': 
            tokenizing();  // Calls the 'tokenizing()' function if the input is '4'.
            break;

        case '0':
            printf("Exiting the program...\n");  // Prints exit message if the user chooses to quit.
            break;

        default:
            printf("Invalid option. Please enter a valid number.\n");  // Handles invalid input.
            break;
        }
    } while (buff[0] != '0');  // Loop continues until '0' is entered to exit.

    return 0;  // Exits the main function and returns a status code of 0 (indicating successful execution).
}
*/