/** lab19-02.c
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

int main() {
    char str[MAX_STR_LEN];
    char searchChars[MAX_STR_LEN];
    char replaceChar;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);
    str[strlen(str) - 1] = '\0';
    
    printf("Enter a search string (<= 80 chars): ");
    fgets(searchChars, MAX_STR_LEN, stdin);
    searchChars[strlen(searchChars) - 1] = '\0';

    printf("Enter a replace character: ");
    scanf(" %c", &replaceChar);

    replaceMultiChar(str, searchChars, replaceChar);

    return 0;
}