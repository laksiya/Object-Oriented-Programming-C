#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

//OPPGAVE 1A
int write_word() {
	ofstream output;
	string ord;
	output.open("output.txt");
	if (output.fail()) {
		cout << "Error opening file" << endl;
		exit(1);
	}
	output << "Dette er en ny testfil." << endl;
	output << "Skriv inn et ord (skriv quit for å avslutte)" << endl;
	cin >> ord;

	while (ord != "quit") {
		output << ord << endl;
	}
	output.close();
}

//OPPGAVE 1B
int lineNumber() {
		ifstream input("input.txt");
		ofstream output("output.txt");
		string ord;

		if (output.fail()) {
			cout << "Error opening file" << endl;
			exit(1);
		}
		
		if (input.fail()) {
			cout << "Error opening file" << endl;
			exit(1);
		}

		string line;
		int lineNumber = 0;
		while (getline(input,line)) {
			lineNumber++;
			output <<lineNumber << ": " <<line << endl;
		}
		input.close();
		output.close();
	}


	/*) Skriv en funksjon som leser fra en tekstfil, og lager en ny fil (med et annet
navn) med den samme teksten, men med linjenumre.
Sørg for at programmet ditt sjekker for vanlige feil som at filen ikke eksisterer.
Hint: For å lese en hel linje av gangen, bruk getline()-funksjonen. For å teste om du
har kommet til slutten av filen, kan du bruke det læreboken omtaler som «the macho way
to test for end of file». Dette finner du på side 558 i 5. utgave og side 536 i 6. utgave av
læreboken.*/