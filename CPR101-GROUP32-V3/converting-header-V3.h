/* Version 1*/
#ifndef _CONVERTING_H_ // Checks if the header file_CONVERTING_H_ has not been defined yet to avoid multiple inclusions. 
#define _CONVERTING_H_ // Defines the macro_CONVERTING_H to mark the header file as included. 

#include <stdio.h> // Includes the standard input/output libraru for functions like printf and fgets. 
#include <string.h> // Includes the string manipulation library for functions like strlen and strcmp.
#include <stdlib.h> // Includes the standard library for general-purpose utility functions. 
#include <ctype.h>  // Includes the library for character-handling functions. 

void converting(void); // Function prototype declaration.

#endif // End of preprocessor directive block. 


/* Version 2 */
#ifndef _CONVERTING_H_  // Checks if the header file_CONVERTING_H_ has not been defined yet to avoid multiple inclusions.
#define _CONVERTING_H_  // Defines the macro _CONVERTING_H_ to mark the header file as included.

#include <stdio.h>  // Includes the standard input/output library for functions like printf and fgets.
#include <string.h>  // Includes the string manipulation library for functions like strlen and strcmp.
#include <stdlib.h>  // Includes the standard library for general-purpose utility functions like atoi.
#include <ctype.h>   // Includes the library for character-handling functions like isdigit.

// Function prototypes
int is_numeric(const char *str);  // Checks if a string contains only numeric characters.
void converting(void);  // Converts a numeric string to an integer.

#endif  // End of preprocessor directive block.

/* Version 3 */
#ifndef _CONVERTING_H_  // Checks if the header file _CONVERTING_H_ has not been defined yet to avoid multiple inclusions.
#define _CONVERTING_H_  // Defines the macro _CONVERTING_H_ to mark the header file as included.

#include <stdio.h>   // Includes the standard input/output library for functions like printf and fgets.
#include <string.h>  // Includes the string manipulation library for functions like strlen and strcmp.
#include <stdlib.h>  // Includes the standard library for general-purpose utility functions like atoi.
#include <ctype.h>   // Includes the library for character-handling functions like isdigit.

#include <stddef.h>  // Includes the standard definitions of types like size_t and NULL (optional).

// Function prototypes
int is_numeric(const char *str);   // Checks if a string contains only numeric characters.
void converting(void);  // Function to convert a numeric string to an integer.

// Additional utility functions (Optional enhancements)
int safe_getchar(void);   // Function for safely reading a single character from input.
void clear_input_buffer(void);  // Function to clear any leftover characters in the input buffer to prevent unexpected input behavior.

#endif  // End of preprocessor directive block.


