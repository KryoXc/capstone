/*
*
* QT or ncurses based GUI
* 
*
*
*/


// includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// GUI includes
// include "ncurses_gui.h"

// Global Vars and Structs
int gui = 0;
int debug = 0;


// function defs

// parse input, convert to byte string
char * parse();

// serialize buffered text
void serialize();


/* Program entry point
 * 
 *  Options: 
 *
 *      -d          : debug mode
 *      -l [FILE]   : library file
 *      -q          : qt interface
 *      -n          : ncurses interface
 *
 */
int main(int argc, char *argv[]) {
    
    int i;

    // argv ladder
    // add in error handling
    
    if(argc > 1) {
        for(i = 1; i < argc; i++) {
            if(argv[i][0] == '-') {
            switch(argv[i][1]) {
                case 'd' :
                    printf("debug mode active.\n");
                    debug = 1;
                    break;
        
                case 'l':
                    // load library
                    printf("Attempting library load...\n\n");
                    if(argv[i+1] != NULL && argv[i+1][0] != '-') {
                        printf("library loaded.\n");
                        i++;    
                    } else {
                        printf("no library file specified. \n");
                        exit(1);
                    }
                    break;
                
                case 'q':
                    printf("Using Qt interface.\n");
                    gui = 2;
                    break;

                case 'n':
                    printf("Using ncurses interface.\n");
                    gui = 1;
                    break;

                default:
                    printf("No valid arguments specified.\nUSAGE: pgrm -[d|l \
                            [FILE]|q|n]\n\nLoading default.\n");
                    break;
                } 
            } else {
                printf("Invalid argument.\n\n");
                exit(2);
            }
        }
    }


    // printf debug statments
    printf("argc: %i\n\n", argc);
    printf("%c\n\n", 255);   

// =============== main loop ================================================//


    /* input block
     * export to different file? Perhaps support graphical, term, or cli 
     */



    /* parsing block
     * take in input string, convert to points
     * in debug mode, should pass along single value
     */

    // if library has been loaded. flag? lib != NULL? 
    // parse();

// test comment
    /* serializer
     * communicate with Arduino
     * format correctly
     */ 
    // serialize( );
    


    return 0;
}

char * parse(char * str) {
    int i = 0;
    int n = 0;

    for(i = 0; str[i] != '\0'; i++) {
        n++;
    }
    printf("n characters in string.\n\n");

    char *temp = malloc(n*sizeof(char)); // string of point values. Structure TBD by library
    // construct byte stream, null terminate for the sake of serialize
    
    return temp;
}

void serialize(char * input) {
    // serial device should be open before this is called.
    int i;
    
    // setup
    for(i = 0; input[i] != '\0'; i++) {
        
    } 
}
