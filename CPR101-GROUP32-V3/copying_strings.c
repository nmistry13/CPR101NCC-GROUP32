#include "copying_strings.h"

#define BUFFER_SIZE 100

void copying_strings_demo(void) {
    printf("*** Start of copying strings demo ***\n");
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];

    do {
        // Reset destination string to empty
        destination[0] = '\0';
        printf("Destination String is reset to empty\n");

        // Prompt the user to input a string or 'q' to quit
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the input string
        if (strlen(source) > 0) {
            source[strlen(source) - 1] = '\0';
        }

        // Use strcpy_s to copy the source string to the destination
        strcpy_s(destination, BUFFER_SIZE, source);

        // Print the current content of the destination string
        printf("New Destination String is \'%s\'\n", destination);

    } while (strcmp(source, "q") != 0);  // Loop until "q" is typed

    printf("*** End copying string demo ***\n\n");
}
