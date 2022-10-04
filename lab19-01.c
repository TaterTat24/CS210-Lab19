/** lab19-01.c
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
    char searchChar;
    char replaceChar;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);
    str[strlen(str) - 1] = '\0';
    
    printf("Enter a search character followed by replace character: ");
    scanf(" %c", &searchChar);
    scanf(" %c", &replaceChar);

    replaceCharInStr(str, searchChar, replaceChar);

    return 0;
}