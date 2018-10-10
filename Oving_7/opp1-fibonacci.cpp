#include <iostream>
using namespace std;

//OPPGAVE1a
void fillInFibonacciNumbers(int result[], int length) {
	if (length == 0) {
		return;
	}
	
	if (length == 1) {
			result[0] = 0;
	}
	
	if(length==2){
		result[0] = 0;
		result[1] = 1;
	}

	else {
		result[0] = 0;
		result[1] = 1;
		for (int j = 2; j < length; j++) {
			result[j] = result[j - 2] + result[j - 1];

		}
	}
}

//OPPGAVE1b
void printArray(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << "\t";
	}
}


//Oppgave 1c
void createFibonacci() {
	int ask;
	cout << "How many of the Fibonacci numbers shall be printed?" << endl;
	cin >> ask;

	int *numbers = new int[ask];
	fillInFibonacciNumbers(numbers, ask);
	printArray(numbers, ask);
	delete[] numbers;
	numbers = nullptr;
}

/*Lag en funksjon void createFibonacci().Funksjonen skal be brukeren om lengden på
tallrekka, dynamisk allokere en tabell av riktig størrelse, fylle denne med tall og skrive ut.
Funksjonen kan oppføre seg omtrent som dette, erstatt kommentarene med din kode :
void createFibonacci() {
	// 1. Spør brukeren hvor mange tall som skal genereres
	// 2. Alloker minne til en tabell som er stor nok til tallrekka
	// 3. Fylle tabellen med funksjonen fillInFibonacciNumbers
	// 4. Skriv ut resultatet til skjerm med printArray
	// 5. Frigjør minnet du har reservert
}

*/
