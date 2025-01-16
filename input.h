//Nathanael Gonzalez
// Jan./16/2025

#ifndef INPUT_H
#define INPUT_H

//Max length for input string
#define MAX_INPUT 1024

/**
 * Reads input from the user and returns it as a dynamically allocated string.
 * The caller is responsible for freeing the returned string.
 * 
 * @return pointer to the input string or NULL if EOF is encountered.
 */

char* read_input();

#endif //INPUT_H