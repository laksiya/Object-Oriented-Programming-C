#include <iostream>
#include "tests.h";
#include "utilities.h";
#include "mastermind.h";

using namespace std;

/*OPPGAVE 1a
v0 vil forbli =5. Result = 25
*/

/*OPPGAVE 3e
JA, swapnum burde bruke pekere for at
verdiene til a b skal forsvinne etter programmet
lukkes.
*/

int main() {
	int tall = 21;
	while (tall != 0) {
		cout << " " << endl;
		cout << "Valgmeny:" << endl;
		cout << "1)testCallbyValue" << endl;
		cout << "2)testCallbyPointer" << endl;
		cout << "3)testSwapNumbers" << endl;
		cout << "4)testTablessorting" << endl;
		cout << "5)testSortArray" << endl;
		cout << "6)testCStrings" << endl;
		cout << "7)readInputToCString" << endl;
		cout << "8)testcountOccurenceOfCharacther" << endl;
		cout << "9)testCStrings_input" << endl;
		cout << "10)playMastermind" << endl;
		cout << "0)Avslutt" << endl;
		cout << "Velg et alternativ:" << endl;
		
		cin >> tall;

		switch (tall) {
		case 0:
			break;

		case 1:
			testCallByValue();
			break;

		case 2:
			testCallByPointer();
			break;

		case 3:
			testSwapNumber();
			break;

		case 4:
			testTablessorting();
			break;

		case 5:
			testSortArray();
			break;

		case 6:
			testCStrings();
			break;

		case 7:
			char table[6];
			readInputtoStrings(6, table, 'A', 'F');
			break;

		case 8:
			testcountOccurenceOfCharacther();
			break;

		case 9:
			testCStrings_input();
			break;
		case 10:
			playMastermind();
				break;
		default:
			cout << "Ugyldig inntasting" << endl;
			break;
		}

	}

}