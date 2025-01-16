//Nathanael Gonzalez
// Jan./16/2025

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

char* read_input() {
    char* input = malloc(MAX_INPUT); //Allocate memory for input
    if(!input) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }//end if

    //Display the shell prompt
    printf("mysh> ");
    fflush(stdout); //Ensure the prompt is displayed immediately

    //Read input from the user
    if(fgets(input, MAX_INPUT, stdin) == NULL) {
        free(input); //Free memory if EOF is encountered
        return NULL;
    }//end if

    //Remove the trailing newline character, if any
    intput[trcspn(input, "\n")] = 0;

    return input; // Return the dynamically allocated input string
}