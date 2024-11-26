



/* Version 2 */
	printf("***Start Of Measuring Strings Demo * **\n");
	// Declare a character array (buffer) with a size defined by BUFFER_SIZE
		char buffer2[BUFFER_SIZE];
	do {
		// Prompt the user to type a string or 'q' to quit
		printf("Type a string (q - to quit) :\n");
		// Read a line of input from stdin and store it in buffer2
		fgets(buffer2, BUFFER_SIZE, stdin);
		// Remove the newline character ('\n') at the end of the string by replacing it with null terminator ('\0')
		buffer2[strlen(buffer2) - 1] = '0';
		// If the string is not "q", print its length
		if (strcmp(buffer2, "q") != 0)
			printf("The Length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));
	} While(strcmp(buffer2, "q") != 0);  // Loop until the user types "q"

	printf("*** End Of Measuring String Demo ***\n\n");

		
