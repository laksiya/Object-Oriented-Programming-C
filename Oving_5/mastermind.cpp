#include <iostream>
#include "utilities.h"
using namespace std;

void playMastermind() {
	const int SIZE = 4;
	const int LETTERS = 6;
	const int TURN = 10;

	cout << "LETS PLAY MASTERMIND" << endl;
	cout << "I'll generate a code of " << LETTERS << " letters." << endl;
	cout << "GUESS THE CODE!" << endl;
	cout << "You have "<<TURN << " turns to guess! Good Luck!" << endl;

	char code[SIZE+1] = {};
	char guess[SIZE+1] = {};
	code[SIZE] = '\0';
	guess[SIZE] = '\0';

	randomizeCstring(code, SIZE + 1, 'A', 'A' + (LETTERS - 1));

	int check =0;
	int guessCount[LETTERS] = {};
	int codeCount[LETTERS] = {}; 
	int num = 0;

	for (int i =1;i<=TURN;i++) {
		cout << i  <<") What's your guess? " << endl;
		readInputtoStrings(5, guess, 'A', 'A' + (LETTERS - 1));
		check = checkCharactersandPosition(guess, 5, code);

		if (check == 4){
			cout << "Congratulations! You got the code right! It's " << code << endl;
			return; 
		}

		for (char bokstav = 'A'; bokstav <= 'A' + (LETTERS - 1); bokstav++) {
			int ant = countOccurenceOfCharacther(code, LETTERS+1, bokstav);
			int tell = countOccurenceOfCharacther(guess, LETTERS + 1, bokstav);
			codeCount[num] = ant;
			guessCount[num] = tell;
			num++;
		}
		
		num = 0;
		for (int i = 0; i < LETTERS; i++) {
			int minst;
			if (codeCount[i] > guessCount[i]) {
				swapNumbers(&codeCount[i], &guessCount[i]);
			}	
		}

		int sum = 0;
		for (int i = 0; i < LETTERS; i++) {
			sum = sum + codeCount[i];
		}

		cout << "You got " << sum << " letters correct!" << endl;
		cout << check << " are correctly placed!" << endl;

	}

		cout << "Better luck next time! The code was " << code << endl;
	}
