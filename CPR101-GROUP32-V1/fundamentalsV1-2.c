#include "fundamentals.h"

void fundamentals() {
/* Version 1 */
// FUNDAMENTALS MODULE SOURCE   
#define  _CRT_SECURE_NO_WARNINGS  // Disable security warnings in visual studio
#define  BUFFER_SIZE     80   // Maximum size of the input buffer
#define  NUM_INPUT_SIZE  10  // Maximum size of the numeric input
#include  "fundamentals.h" // Include header file for functions demonstrations

	void fundamentals(void) {

		//V1
		// Print the start message
		printf("***start of indexing strings demo***\n");
		char    buffer1[BUFFER_SIZE]; // Buffer to hold the user's input string
		size_t   position; // position in the string entered by the user
		do {
			// prompt the user to enter a string or 'q' to quit 
			printf("Type of empty string  (q - to quit):\n");
			fgets(buffer1, BUFFER_SIZE, stdin); // Read the input string  from the user
			buffer1[strlen(buffer1) - 1] = '\0'; // Remove the newline character from the input
			// Check if the user entered 'q' to quit the program
			if (strcmp(buffer1, "q") != 0) {
				// Prompt the user to enter a position within the string
				printf("Type the character position within the string:\n");
				fgets(numInput, NUM_INPUT_SIZE, stdin); // Read the position input from the user
				numInput[strlen(numInput) - 1] = '\0'; // Remove the newline character
				position = atoi(numInput); // Convert the position input to an integer
				// Check if the position is within the length of the string
				if (position >= strlen(buffer1)) {
					// If position is too large, set it to the last character index
					position = strlen(buffer1) - 1;
					printf("Too big... Position reduced to max. available\n");
				}
				// Display the character at the specified position in the string
				printf("The character found at %d position is \'%c\'\n",
					(int)position, buffer1[position]);

			}
		} while (strcmp(buffer1, "q") != 0); // Continue the loop until 'q' is entered
		// Print end message after exiting the loop
		printf("***End Of Indexing String Demo ***\n\n");
	}




