#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int show_stats() {
	ifstream input("input.txt.");
	if (input.fail()) {
		cout << "Error opening file" << endl;
		exit(1);
	}
	int chars['z' - 'a'] = { 0 };
	vector<int> letters;
	int t = 0;
	for (int i = 0; i < 26; i++) {
		letters.push_back(t);
	}

	int totchar = 0;
	string line;

	while (getline(input, line)) {
		totchar += line.size();
		for (auto c : line) {
			c = tolower(c);
			if (c<'a' || c>'z')continue;

		}
		for (int i = 0; i < line.size(); i++) {
			
			if (line[i] >= 97) {
				letters[line[i] - 97]++;
			}
			else {
				letters[tolower(line[i]) - 97]++;
			}
		}
	}
		cout << "Character statistics:" << endl;
		cout << "Total number of characters: " << totchar << endl;
		char d = 97;
		for (int i = 0; i < 26; i++) {
			cout << d << ": " << letters[i] << endl;
			d++;
		}
	
}
/*Skriv en funksjon som leser en tekstfil og viser statistikk over bokstavene i filen
på skjermen.
Programmet skal telle antall bokstaver i filen og hvor mange ganger hver bokstav forekommer.
Du kan begrense antall forskjellige bokstaver du teller til normale engelske bokstaver
(a–z) og du kan også forenkle oppgaven ved å konvertere alle bokstavene til små bokstaver
med tolower(char).
Hint: Du kan løse denne oppgaven ved å bruke en tabell(array) eller en std::vector med
	lengde lik antall forskjellige bokstaver.Hvis du for eksempel tar inn bokstaven ’e’, kan du
	inkrementere elementet i tabellen på posisjon ’e’–’a’(characterCount[’e’ - ’a’]).Pass
	på at du ikke går utenfor grensene til tabellen.*/