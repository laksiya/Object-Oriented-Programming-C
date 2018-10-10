#pragma once
int randomWithLimits(int nedre, int ovre);
int incrementByValueNumTimes(int startValue, int increment, int numTimes);
void incrementByValueNumTimes2(int *startValue, int increment, int numTimes);
void swapNumbers(int *a, int *b);
void printArray(int table[], int size);
void printArrayChar(char table[], int size);
void randomizeArray(int table[], int size);
void sortArray(int table[], int size);
void medianOfArray(int table[], int size);
void randomizeCstring(char table[], int chars, char ovre, char nedre);
void readInputtoStrings(int chars, char *table, char ovre, char nedre);
int countOccurenceOfCharacther(char *table, char lengde, char bokstav);
int checkCharactersandPosition(char *table1, char lengde, char *table2);