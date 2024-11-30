/* Version 1*/
#define _CRT_SECURE_NO_WARNINGS //Disables Visual Studio secuity warnings for unsafe functions.. 
#define BUFFER_SIZE 80  // Defines the buffer size for input strings (80 Charactets). 
#include "converting.h" // Includes the header file for function prototypes and declarations. 

// Function to check if a string is numeric
int is_numeric(const char *str) { //checks if the string contains only numeric characters. 
    for (int i = 0; str[i] != '\0'; i++) { // Loops through the string 'str' untill the null terminator ('\0') is reached. 
        if (!isdigit(str[i])) { //Checked if the current character 'str[i]' is not a digit. 
            return 0;  // False: Not numeric
        }
    }
    return 1;  // True: Numeric
}

void converting(void) { // Function definition for converting numeric strings to integers. 
    printf("*** Start of Converting Strings to int Demo ***\n"); // Displays the start message for the string-to-integer conversion demo. 
    char intString[BUFFER_SIZE]; // Declares a buffer to store the user's input string. 
    int intNumber; // Declares a variable to store the converted integer value. 

    do { //Begins a dp-while loop to repeatedly prompt the user for input until they choose to quit. 
        printf("Type an int numeric string (q - to quit):\n"); // Prompts the user to enter a numeric string or 'q' to exit program. 
        fgets(intString, BUFFER_SIZE, stdin); //Reads a line of input from the user into the intString buffer. 

        // Remove newline character, if present
        intString[strlen(intString) - 1] = '\0'; // Removes the newline character from the input string. 

        if (strcmp(intString, "q") != 0) { //Checks if the input string isnot equal to "q"
            if (is_numeric(intString)) {  //Checks if the input string consists of numeric characters only. 
                intNumber = atoi(intString); //Converts the numeric string into an integer. 
                printf("Converted number is %d\n", intNumber); //Display the converted integer. 
            } else { // Starts the block for handling invalid numeric input. 
                printf("Error: Input is not a valid numeric string. Try again.\n"); // Displays an error message when the input is not numeric. 
            } // Closses the else block for handling invalid numeric input. 
        } // Closes the do-while loop that allows the program to repeat the input process, 
    } while (strcmp(intString, "q") != 0); // Ends the do-while loop, continuing if the user input is not "q".

    printf("*** End of Converting Strings to int Demo ***\n"); // Prints the ending message to indicate the end of the demo. 
} // Closes the do-while loop, which continues until the user inputs "q". 


/* Version 2*/

#define _CRT_SECURE_NO_WARNINGS  // Disables Visual Studio security warnings for potentially unsafe functions.
#define BUFFER_SIZE 80  // Defines the buffer size for user input (maximum 80 characters).
#include "converting.h"  // Includes the header file that contains function prototypes and necessary declarations
#include <stdio.h>  //  Includes the standard input/output library, allowing use of functions such as printf, fgets, etc., for input and output operations.
#include <string.h>  // Provides functions to handle strings, such as strlen (for string length) and strcmp (for comparing strings).
#include <stdlib.h>// Provides functions to handle strings, such as strlen (for string length) and strcmp (for comparing strings).
#include <ctype.h>  // Includes functions for character handling, such as isdigit, which checks if a character is a digit (used for numeric validation).

// Function to check if a string is numeric
int is_numeric(const char *str) {  // Defines the function 'is_numeric' that checks whether the input string consists solely of numeric characters.
    for (int i = 0; str[i] != '\0'; i++) {  // Loops through each character in the string until the null terminator is reached. 
        if (!isdigit(str[i])) {  // If the character is not a digit.
            return 0;  // Returns 0, indicating the string is not numeric.
        }
    }
    return 1;  // If all characters are digits, returns 1 to indicate the string is numeric.
}

// Main function for converting numeric strings to integers
void converting(void) {  // Defines the main function 'converting' that will handle the input/output and numeric conversion logic.
    printf("*** Start of Converting Strings to int Demo ***\n");  

    char intString[BUFFER_SIZE];   // Prints a message to indicate the start of the conversion demo.
    int intNumber;   // Declares an integer variable to hold the converted numeric value.

    do { // Starts a do-while loop to repeatedly prompt the user for input until they enter "q" to quit.
        printf("Type an int numeric string (q - to quit):\n"); // Prompts the user to enter a numeric string or "q" to quit.
        fgets(intString, BUFFER_SIZE, stdin); // Reads the input string from the user and stores it in the 'intString' array.
  
        // Remove newline character, if present
        intString[strlen(intString) - 1] = '\0';  // Removes the newline character that fgets may leave at the end of the string.

        if (strcmp(intString, "q") != 0) {   // If the entered string is not "q", proceed with the conversion.
            if (is_numeric(intString)) {  // Checks if the input string is numeric by calling the 'is_numeric' function.
                intNumber = atoi(intString);  // Converts the valid numeric string to an integer using atoi.
                printf("Converted number is %d\n", intNumber);  // Prints the converted integer.
            } else {  // If the input is not numeric. 
                printf("Error: Input is not a valid numeric string. Try again.\n");  // Displays an error message.
            }
        }

    } while (strcmp(intString, "q") != 0);   // Repeats the loop until the user enters "q" to quit.

    printf("*** End of Converting Strings to int Demo ***\n");  // Prints a message to indicate the end of the demo.
}

/* Version 3*/
#define _CRT_SECURE_NO_WARNINGS  // Disables Visual Studio security warnings for potentially unsafe functions.
#define BUFFER_SIZE 80  // Defines the buffer size for user input (maximum 80 characters).
#include "converting.h"  // Includes the header file for function prototypes and necessary declarations
#include <stdio.h> // Includes the standard input/output library for functions like printf and fgets used in this code. 
#include <string.h> // Includes the string library for functions like strlen and strcmp used in this code. 
#include <stdlib.h> // Includes the standard library for functions like atoi used din this code. 
#include <ctype.h>  // Includes the C library for character classification functions like isdigit used in this code. 

// Function to check if a string is numeric
int is_numeric(const char *str) { // Function to determine if the given string contains only numeric characters. 
    // Enhanced: Handle empty strings and white spaces
    if (str == NULL || strlen(str) == 0) { // Checks if the input string is NULL or empty to handle invalid input. 
        return 0;  // Returns 0 to indicate that the string is not numeric (invalid input).
    }
    for (int i = 0; str[i] != '\0'; i++) { // Loops through each character of the string 'str' until the null terminator ('/0') is reached. 
        if (!isdigit(str[i])) {  // Checks if the character at index 'i' in the string 'str' is not a digit using the isdigit function. 
            return 0;  // Returns 0 to indicate that the string does not contain only numeric characters. 
        }
    }
    return 1;  // Returns 1 to indicate that the string contains only numeric characters. 
}

// Main function for converting numeric strings to integers and handling advanced cases
void converting(void) { // Defines the function 'converting' which takes no parameters and performs string-to-integer conversion. 
    printf("*** Start of Converting Strings to int Demo ***\n"); // Prints a message to the console indicating the start of the string-to-integer conversion demo. 

    char intString[BUFFER_SIZE];  // Declares a character array 'intString' with a size defined by BUFFER_SIZE, used to store the input string from the user. 
    int intNumber;  // Declares an integer variable 'intNumber' to store the converted numeric value from the input string. 
    int validConversionCount = 0;  // Declares an integer variable 'validConversionCount' and initialzes it to 0.

    do { // Begins a do-while Loop, ensuring that the code block inside the Loop is executed at least once before checking the loop condition. 
        printf("Type an int numeric string (q - to quit):\n"); // Displays a message prompting the user to input a numeric string, with an option to quit by typing "q". 
        fgets(intString, BUFFER_SIZE, stdin);  // Reads a line of input from the standard input and stores it in 'intString' buffer, ensuring the input doesn't exceed the defined BUFFER_SIZE. 

        // Remove newline character, if present
        size_t length = strlen(intString); //Determines the length of the string stored in 'intString', excluding the null terminator, and stores it in the 'length' variable.
        if (length > 0 && intString[length - 1] == '\n') {   // Checks if the input string is non-empty and ends with a newline character, indicating the presence of user input followed by the Enter key. 
            intString[length - 1] = '\0';  //  Replaces the newline character at the end of the input string with a null terminator ('\0'), effectively removing the newline and properly terminating the string.
        }

        if (strcmp(intString, "q") != 0) {  // Checks if the user's input string is not equal to "q". If true, the program continues to process the input. Otherwise, it exits the loop.
            if (is_numeric(intString)) {  // Verifies if the input string consists entirely of numeric characters. If true, the string is valid for conversion to an integer.
                intNumber = atoi(intString);  // Converts the numeric string `intString` into an integer and stores the result in the variable `intNumber`.
                printf("Converted number is %d\n", intNumber); // Prints the converted integer value `intNumber` to the console, formatted as a decimal integer.
                validConversionCount++;  // Increments the counter `validConversionCount` by 1, tracking the total number of successful string-to-integer conversions.
            } else { // Starts an alternate block of code to handle cases where the condition in the preceding `if` statement is not met.
                printf("Error: Input is not a valid numeric string. Try again.\n"); // Displays an error message indicating that the input is not a valid numeric string and prompts the user to try again.
            }
        }

    } while (strcmp(intString, "q") != 0); //  Loops back to the beginning of the do-while loop, continuing until the user inputs "q" to quit.

    printf("Total valid conversions: %d\n", validConversionCount);  // Prints the total count of valid numeric string conversions that occurred during the program's execution.
    printf("*** End of Converting Strings to int Demo ***\n");  // // Prints a message indicating the conclusion of the string-to-integer conversion demo.
}


