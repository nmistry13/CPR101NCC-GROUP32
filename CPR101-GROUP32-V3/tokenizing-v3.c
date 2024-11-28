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
	printf("*** Start of Tokenizing Sentence Demo ***\n");
	char  sentences[BUFFER_SIZE];  //Declare a char array sentences with a size of 300.
	char* nextSentence = NULL;     // Initialize the char pointer nextSentence to NULL.
	int   sentencesCounter;        // Declare a int varaible phrasesCounter used to store the number of the tokenized sentences 
	isQuit = 0;                    // reset isQuit.
	do
	{
		printf("Type a few sentences separated by dot(q - to quit):\n"); //Prompt user to input a few sentences.

		//Get the string input by the user and store it in sentences. The length of the string is less than or equal to BUFFER_SIZE.
		fgets(sentences, BUFFER_SIZE, stdin);
		if (strchr(sentences, '\n') == NULL)  //  If there is no newline character, it means the input has exceeded the buffer size.
		{

			while (getchar() != '\n')  //Read and discard characters from the input stream one by one until a newline character is encountered.
			{

			}
			printf("Input exceeded the string length limit(Maximum 298 characters), please try again..\n");

		}
		else
		{
			// Replace the last character of the sentences with a null terminator. This marks the end of the string.
			sentences[strlen(sentences) - 1] = '\0';
			if (strcmp(sentences, "q") != 0)   //If sentences is not 'q', continue.Otherwise, the program ends after displaying an end prompt.
			{
				//Tokenize the string stored in "sentences" using dot as delimiter and store the first token in 'nextSentence'. 
				nextSentence = strtok(sentences, ".");
				sentencesCounter = 1;            //sentencesCounter used to store the number of tokenizing.
				while (nextSentence)        //if nextSentence is not null, enter the while loop.
				{
					// Display the Sequence number of tokenized sentence and tokenized sentence; Then sentencesCounter plus 1. 
					printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
					//Tokenize the string stored in "sentences" using dot as delimiter and store the first token in 'nextSentence' again.
					nextSentence = strtok(NULL, ".");
				}
			}
			else
			{
				isQuit = 1;
			}
		
		}
	} while (!isQuit); //isQuit = 0 means return to the beginning of the do-while loop and continue. Otherwise, the program ends after displaying an end prompt.
	printf("*** End of Tokenizing Sentences Demo ***\n"); 

}