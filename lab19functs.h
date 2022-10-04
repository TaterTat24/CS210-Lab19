/** lab19functs.h
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 19
* Purpose: 
* ===========================================================
*/
#ifndef LAB19FUNCTS_H
#define LAB19FUNCTS_H

#define MAX_STR_LEN 81

void replaceCharInStr(char str[], char searchChar, char replaceChar);

void replaceMultiChar(char str[], char searchChars[], char replaceChar);

int findLocations(char str[], int locations[], char searchChar);

int countSeqStr(char str[], char searchStr[]); 

#endif