/** lab19-04.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 19
* Purpose: 
* ===========================================================
*/
#include <stdio.h>
#include "lab19functs.h"

int main() {
    char str[MAX_STR_LEN];
    char searchStr[MAX_STR_LEN];

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);

    printf("Enter a search string (<= 80 chars): ");
    fgets(searchStr, MAX_STR_LEN, stdin);
    
    return 0;
}