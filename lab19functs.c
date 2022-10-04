/** lab19functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 19
* Purpose: 
* ===========================================================
*/
#include <stdio.h>
#include <string.h>

#include "lab19functs.h"

void replaceCharInStr(char str[], char searchChar, char replaceChar) {
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == searchChar) {
            str[i] = replaceChar;
        }
    }

    printf("New string (between arrows): -->%s<--\n", str);
}

void replaceMultiChar(char str[], char searchChars[], char replaceChar) {
    int i;
    int j;
    for (i = 0; i < strlen(str); i++) {
        for (j = 0; j < strlen(searchChars); j++) {
            if (str[i] == searchChars[j]) {
                str[i] = replaceChar;
            }
        }
    }
    
    printf("New string (between arrows): -->%s<--\n", str);
}

int findLocations(char str[], int locations[], char searchChar) {
    int i;
    int count = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == searchChar) {
            locations[count] = i;
            count = count + 1;
        }
    }
    return count;
}

int countSeqStr(char str[], char searchStr[]){
    int i;
    int j;
    int searchStrLength;
    searchStrLength = strlen(searchStr);
    for (i = 0; i < strlen(str) - searchStrLength; i++) {
        for (j = 0; j < searchStr; j++) {
            
        }
        
    }    
}