//�VING 2

#include <iostream>

//Oppgave 1A
void inputAndPrintInteger() {
	int x = 0;
	std::cout << "Skriv inn et tall: ";
	std::cin >> x;
	int x = 0;
	std::cout << "Skriv inn et tall: ";
	std::cin >> x;
//Oppgave 1C
void inputIntegersAndPrintSum() {
	int x = 0;
	int y = 0;
	std::cout << "Skriv inn et tall: ";
	std::cin >> x;
	std::cin >> y;
//Oppgave 1D
//Valgte inputAndPrintInteger, fordi jeg synes det er ryddigere � samle kodene inni hver funksjon istedenfor � skrive videre p� koden i main-funksjon


//Oppgave 1E
bool isOdd(int i) {
	return i%2==1
}

void printHumanReadableTime(int tempSek) {
	int time;
	int min;
	int sek;
	int tempMin;
	sek = tempSek % 60;
	tempMin= ((tempSek - sek) / 60)
	min= tempMin %60
	time = (tempMin-min)%60
}

int main() {
	inputAndPrintInteger();

	int number = inputInteger();
	std::cout << "Du skrev: " << number << std::endl;

	inputIntegersAndPrintSum();

	for (int i = 10; i < 15; i++) {
		if (isOdd(i)) {
			std::cout << i << " er et oddetall." << std::endl;
		}
		else {
			std::cout << i << " er et partall." << std::endl;
		}
	}

}