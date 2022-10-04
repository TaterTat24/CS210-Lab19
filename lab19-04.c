/** lab19-04.c
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
    char searchStr[MAX_STR_LEN];
    int count;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter a search string (<= 80 chars): ");
    fgets(searchStr, MAX_STR_LEN, stdin);
    searchStr[strlen(searchStr) - 1] = '\0';
    
    count = countSeqStr(str, searchStr);

    printf("There are %d occurrences of %s.\n", count, searchStr);

    return 0;
}