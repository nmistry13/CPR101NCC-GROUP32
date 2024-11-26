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
