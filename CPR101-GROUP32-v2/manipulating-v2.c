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
		//Get the string input by the user and store it in string1. The length of the string is less than BUFFER_SIZE.
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
				//Get the string input by the user and store it in string2. The length of the string is less than BUFFER_SIZE
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
	
	/* Version 2 */

	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[BUFFER_SIZE];  // Declare a char array compare1 with a size of 80.
	char compare2[BUFFER_SIZE];  // Declare a char array compare2 with a size of 80.
	int  result;
	do
	{
		printf("Type the 1st string to compare(q - to quit):\n");   //Prompt user to input string
		//Get the string input by the user and store it in compare1. The length of the string is less than BUFFER_SIZE.
		fgets(compare1, BUFFER_SIZE, stdin);

		if (strchr(compare1, '\n') == NULL)  //  If there is no newline character, it means the input has exceeded the buffer size.
		{

			while (getchar() != '\n')  //Read and discard characters from the input stream one by one until a newline character is encountered.
			{

			}
			printf("Input exceeded the string length limit(Maximum 78 characters), please try again.\n");
			
		}
		else
		{
			// Replace the last character of the compare1 with a null terminator. This marks the end of the string.
			compare1[strlen(compare1) - 1] = '\0';

			if (strcmp(compare1, "q") != 0)  // If compare1 is not 'q', continue. Otherwise, the program ends after displaying an end prompt.
			{
				printf("Type the 2nd string to compare:\n");  // Prompt user to input the 2nd string 
				////Get the string input by the user and store it in compare2. The length of the string is less than BUFFER_SIZE.
				fgets(compare2, BUFFER_SIZE, stdin);
				if (strchr(compare2, '\n') == NULL)  //  If there is no newline character, it means the input has exceeded the buffer size.
				{

					while (getchar() != '\n')  //Read and discard characters from the input stream one by one until a newline character is encountered.
					{

					}
					printf("Input exceeded the string length limit(Maximum 78 characters), please try again.\n");
				}
				else
				{
					// Replace the last character of the compare2 with a null terminator. This marks the end of the string.
					compare2[strlen(compare2) - 1] = '\0';

					result = strcmp(compare1, compare2); //Compare the string "compare1" and "compare2", store the result to int variable "result"
					if (result < 0)
					{
						// If result is less than 0, display compare1 is less than compare2
						printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
					}
					else if (result == 0)
					{
						// If result is equal to 0, display compare1 is equal to compare2
						printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
					}
					else
					{
						// If result is greater than 0, display compare1 is greater than compare2
						printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
					}
				}

				
			}
		}
			
	} while (strcmp(compare1, "q") != 0); //If compare1 is not "q", return to the beginning of the do-while loop and continue. Otherwise, the program ends after displaying an end prompt.
	printf("*** End of Comparing String Demo ***\n");

/* Version 3 */
	

} 