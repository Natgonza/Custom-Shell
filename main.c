//Nathanael Gonzalez
// Jan/16/2025


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "parser.h"
#include "executor.h"

int main() {
    char* input;     //Holds the raw input string
    char** args;     //Holds parsed command and arguments
    int arg_count;   //Number of arguments parsed
    int status = 1;  //Controls the shell loop; 1 = running, 0 = exit
    

    printf("Welcom to my custom shell! Type 'exit' to quit.\n");

    while(status) {

        //Read input
        input = read_input();
        if (input == NULL) {
            break; //Handle Ctrl + D (EOF)
        }//end if

        //Check for empty input
        if (strlen(input) == 0) {
            free(input);
            continue;
        }//end if

        //Parse input into arguments
        args = parse_input(input, &arg_count);

        //Check for 'exit' command
        if (strcmp(args[0], "exit") == 0) {
            status = 0;
        } else {
            //Execute the command
            execute_command(args);
        }//end else
        free(args);
    }//end while

    printf("Exiting shell. Goodbye!\n");
    
    return 0;
}//end main