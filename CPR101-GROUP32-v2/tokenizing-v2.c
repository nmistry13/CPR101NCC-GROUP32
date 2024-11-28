#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_DEPRECATE  
#include "tokenizing.h"
#define BUFFER_SIZE 300



void tokenizing()
{
/* Version 1 */
	 printf("*** Start of Tokenizing Words Demo ***\n");
	char  words[BUFFER_SIZE];   // Declare a char array words with a size of 300.
	char* nextWord = NULL;      // Initialize the char pointer nextWord to NULL.
	int   wordsCounter;         // Declare a int varaible wordsCounter used to store the number of tokenizing.
	int  isQuit = 0;             // Declare a int varaible isQuit.isQuit = 1 means the user wants to exit the program.
	do
	{
		printf("Type a few words separated by space (q - to quit):\n"); //Prompt user to input string

		//Get the string input by the user and store it in words. The length of the string is less than or equal to BUFFER_SIZE.
		fgets(words, BUFFER_SIZE, stdin);

		if (strchr(words, '\n') == NULL)  //  If there is no newline character, it means the input has exceeded the buffer size.
		{

			while (getchar() != '\n')  //Read and discard characters from the input stream one by one until a newline character is encountered.
			{

			}
			printf("Input exceeded the string length limit(Maximum 298 characters), please try again..\n");

		}
		else
		{
			// Replace the last character of the words with a null terminator. This marks the end of the string.
			words[strlen(words) - 1] = '\0';

			if (strcmp(words, "q") != 0)  //If words is not 'q', continue. Otherwise, the program ends after displaying an end prompt.
			{
				//Tokenize the string stored in 'words' using space as delimiter and store the first token in 'nextWord'. 
				nextWord = strtok(words, " ");

				wordsCounter = 1;  //wordsCounter used to store the number of tokenizing.

				while (nextWord) // if nextWord is not null, enter the while loop.
				{
					// Display the Sequence number of tokenized word and tokenized word; Then wordsCount plus 1. 
					printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
					//Tokenize the string stored in 'words' using space as delimiter and store the first token in 'nextWord' again.
					nextWord = strtok(NULL, " ");
				}
			}
			else
			{
				isQuit = 1;
			}
		}
		
	} while (!isQuit); // isQuit = 0 means return to the beginning of the do-while loop and continue. Otherwise, the program ends after displaying an end prompt.
	printf("*** End of Tokenizing Words Demo ***\n\n");
	

/* Version 2 */
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char   phrases[BUFFER_SIZE];  //Declare a char array phrase with a size of 300.
	char*  nextPhrase = NULL;     // Initialize the char pointer nextPhrase to NULL.
	int    phrasesCounter;        // Declare a int varaible phrasesCounter used to store the number of the tokenized phrases. 
	isQuit = 0;                   // reset isQuit.
	
	do
	{
		printf("Type a few phrases separated by comma(q - to quit):\n");  //Prompt user to input a few phrases
		//Get the string input by the user and store it in phrases. The length of the string is less than or equal to BUFFER_SIZE.
		fgets(phrases, BUFFER_SIZE, stdin);
		if (strchr(phrases, '\n') == NULL)  //  If there is no newline character, it means the input has exceeded the buffer size.
		{

			while (getchar() != '\n')  //Read and discard characters from the input stream one by one until a newline character is encountered.
			{

			}
			printf("Input exceeded the string length limit(Maximum 298 characters), please try again..\n");

		}
		else
		{
			// Replace the last character of the phrases with a null terminator. This marks the end of the string.
			phrases[strlen(phrases) - 1] = '\0';
			if (strcmp(phrases, "q") != 0) //If phrases is not 'q', continue.Otherwise, the program ends after displaying an end prompt.
			{
				//Tokenize the string stored in "phrases" using comma as delimiter and store the first token in 'nextPhrase'. 
				nextPhrase = strtok(phrases, ",");

				phrasesCounter = 1;  //phrasesCounter used to store the number of tokenizing.
				while (nextPhrase)   //if nextPhrase is not null, enter the while loop.
				{
					// Display the Sequence number of tokenized phrase and tokenized phrase; Then phrasesCount plus 1. 
					printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
					//Tokenize the string stored in "phrases" using comma as delimiter and store the first token in 'nextPhrase' again.
					nextPhrase = strtok(NULL, ",");
				}
			}
			else
			{
				isQuit = 1;
			}
		}
		
	} while (!isQuit);  //isQuit = 0 means return to the beginning of the do-while loop and continue. Otherwise, the program ends after displaying an end prompt.
	printf("*** End of Tokenizing Phrases Demo ***\n\n");


/* Version 3 */
	
}