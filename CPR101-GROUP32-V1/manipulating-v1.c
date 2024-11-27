#define CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#include "manipulating.h"
#define BUFFER_SIZE 80


void manipulating() 
{
	/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");
	char   string1[BUFFER_SIZE];  // Declare a char array string1 with a size of 80.
	char   string2[BUFFER_SIZE];  // Declare a char array string2 with a size of 80.
	do
	{
		printf("Type the 1st strig(q - to quit):\n"); //Prompt user to input string
		//Get the string input by the user and store it in string1. The length of the string is less than or equal to BUFFER_SIZE.
		fgets(string1, BUFFER_SIZE, stdin); 

		if (strchr(string1, '\n') == NULL)  //  If there is no newline character, it means the input has exceeded the buffer size.
		{
			
			while (getchar() != '\n')  //Read and discard characters from the input stream one by one until a newline character is encountered.
			{
				
			}
			printf("Input exceeded the string length limit(Maximum 78 characters), please try again..\n");
			
		}
		else
		{

			// Replace the last character of the string1 with a null terminator. This marks the end of the string.
			string1[strlen(string1) - 1] = '\0';

			if ((strcmp(string1, "q") != 0)) // If string1 is not 'q', continue. Otherwise, the program ends after displaying an end prompt.
			{
				printf("Type the 2nd string: \n"); // Prompt user to input string
				//Get the string input by the user and store it in string2. The length of the string is less than or equal to BUFFER_SIZE
				fgets(string2, BUFFER_SIZE, stdin);
				if (strchr(string2, '\n') == NULL)  //  If there is no newline character, it means the input has exceeded the buffer size.
				{

					while (getchar() != '\n')  //Read and discard characters from the input stream one by one until a newline character is encountered.
					{

					}
					printf("Input exceeded the string length limit(Maximum 78 characters), please try again..\n");

				}
				else
				{
					// Replace the last character of the string2 with a null terminator. This marks the end of the string.
					string2[strlen(string2) - 1] = '\0';
					// If the total length of two strings is not exceeded the string length limit, Sting2 connects to the end of string1. ohterwise, prompt user the length exceeded.
					if ((strlen(string1) + strlen(string2)) <= BUFFER_SIZE - 1) 
					{
						strcat(string1, string2);   // Sting2 connects to the end of string1.
						//Display the string1 on the screen. at this time, the value of string1 is original string1 connected string2.
						printf("Concatenated string is\'%s\'\n", string1);
					}
					else
					{
						printf("The total length of two strings exceeded the string length limit(Maximum 79 characters), please try again..\n");
					}

					
				}
				
			}
		}
		
	} while (strcmp(string1, "q") != 0); //If string1 is not "q", return to the beginning of the do-while loop and continue Otherwise, the program ends after displaying an end prompt.
	printf("*** End of Concatenating ***\n"); 		

} 