#include<iostream>
#include <cstdlib>
#include <cstring>
#include "utilities.h"
#include <cctype>
using namespace std;

int randomWithLimits(int nedre, int ovre) {
	int dif = ovre - nedre;
	int tilfeldig_tall = std::rand() % (dif + 1);
	return tilfeldig_tall + nedre;
}

int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	} return startValue;
}

void incrementByValueNumTimes2(int *startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		*startValue += increment;
	} 
}

void swapNumbers(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int table[], int size) {
	for (int i = 0; i < size; i++) {
		cout << table[i]<< " ";
	}
	cout <<  " "<< endl;
}

void printArrayChar(char table[], int size) {
	for (int i = 0; i < size; i++) {
		cout << table[i] << " ";
	}
	cout << " " << endl;
}


void randomizeArray(int table[], int size) {
	for (int i = 0; i < size; i++) {
		table[i]= randomWithLimits(0,100);
	}
	
}

void sortArray(int table[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-1; j++)
			while (table[j] > table[i]) {
			swapNumbers(&table[i], &table[j]);	
			cout << "swapped" << table[i] << "and" << table[j] << endl;
		}	
	}
}

void medianOfArray(int table[], int size) {
	double parsvar;
	int oddsvar;
	if (size % 2 == 0) {
		parsvar = (static_cast<double>(table[(size / 2)-1]) + static_cast<double>(table[(size / 2)])) / 2;
		cout << "Median(par): " << parsvar << endl;
	}
	else {
		oddsvar = table[(size - 1) / 2 + 1];
		cout << "Median(odd): " << oddsvar << endl;
	}
}

void randomizeCstring(char table[], int chars, char nedre, char ovre) {
	for (int i = 0; i <= chars-1; i++) {
		table[i] = randomWithLimits(nedre, ovre);
	}
	table[chars-1] = '\0';
}

void readInputtoStrings(int chars, char *table, char nedre, char ovre) {
	bool check = false;
	while (check==false) {
		cout << "Skriv inn en streng med " << chars-1 << " antall tegn mellom " << nedre << " og " << ovre <<" med mellomrom." << endl;
		for (int i = 0; i < chars-1; i++) {
			cin >> table[i];
		}

		table[chars - 1] = '\0';

		for (int i = 0; i < chars-1; i++) {
			if (table[i] > ovre || table[i] < nedre) {
				table[i]= toupper(table[i]);
				if (table[i] > ovre || table[i] < nedre) {
					check = false;
					break;
				}
				else {
					check = true;
				}
			}
			else {
				check = true;
			}
		}
	}
}



int countOccurenceOfCharacther(char *table, char lengde, char bokstav) {
	int ant = 0;
	for (int i = 0; i < lengde - 1; i++) {
		if (table[i] == bokstav) {
			ant ++;
		}
	}
	//cout << "The letter " << bokstav << " appears " << ant << " times in the string: " << table << endl;
	return ant;
}

int checkCharactersandPosition(char *table1, char lengde, char *table2) {
	int ant = 0;
	for (int i = 0; i < lengde - 1; i++) {
		if (table1[i] == table2[i]) {
			ant++;
		}
	}
	return ant;
}
