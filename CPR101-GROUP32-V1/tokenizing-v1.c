#include "tokenizing.h"
#define BUFFER_SIZE 300
#define _CRT_SECURE_NO_WARNINGS

void tokenizing()
{
/* Version 1 */
	printf("*** Start of Tokenizing Words Demo ***\n");
	char  words[BUFFER_SIZE];   // Declare a char array words with a size of 300.
	char* nextWord = NULL;      // Initialize the char pointer nextWord to NULL.
	int   wordsCounter;         // Declare a int varaible wordsCounter.
	char* context = NULL;       // Initialize the char pointer context to NULL.
	do
	{
		printf("Type a few words separated by space (q - to quit):\n"); //Prompt user to input string

		//Get the string input by the user and store it in words. The length of the string is less than or equal to BUFFER_SIZE.
		fgets(words, BUFFER_SIZE, stdin);
		// Replace the last character of the words with a null terminator. This marks the end of the string.
		words[strlen(words) - 1] = '\0'; 

		if (strcmp(words, "q") != 0)  //If words is not 'q', continue.Otherwise, the program ends after displaying an end prompt.
		{
			//Tokenize the string stored in "words" using space as delimiter and store the first token in 'nextWord'. The 'context' keeps track of the current position for subsequent strtok_s calls.
			nextWord = strtok_s(words, " ", &context);

			wordsCounter = 1;  //wordsCounter used to store the number of tokenizing.

			while (nextWord) // if nextWord is not null, enter the while loop.
			{
				// Display the Sequence number of tokenized word and tokenized word; Then wordsCount plus 1. 
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				//Tokenize the string stored in 'words' using space as delimiter and store the first token in 'nextWord'again.
				nextWord = strtok_s(NULL, " ", &context); 
			}
		}
	} while (strcmp(words, "q") != 0);  //If words is not "q", return to the beginning of the do-while loop and continue. Otherwise, the program ends after displaying an end prompt.
	printf("*** End of Tokenizing Words Demo ***\n\n");


/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}