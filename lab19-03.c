/** lab19-03.c
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
    int locations[MAX_STR_LEN];
    char searchChar;
    int count;
    int i;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter a character whose locations you wish to find: ");
    scanf(" %c", &searchChar);

    count = findLocations(str, locations, searchChar);
    
    printf("There are %d occurrences of %c.\n", count, searchChar);

    for (i = 0; i < count; i++) {
        printf("%c found at location %d.\n", searchChar, locations[i]);
    }
    
    return 0;
}