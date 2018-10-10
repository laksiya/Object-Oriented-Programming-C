#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <sstream>
using namespace std; 

void show_stats() {
	ifstream input("input.txt.");
	if (input.fail()) {
		cout << "Error opening file" << endl;
		exit(1);
	}

	map<string, int> words;

	vector<int> letters;
	int t = 0;
	for (int i = 0; i < 26; i++) {
		letters.push_back(t);
	}

	int totchar = 0;
	string line;
	int totword=0;

	while (getline(input, line)) {
		totchar += line.size();

		stringstream ss(line);
		string ord;
		totword++;
		while(ss >> ord){			for (char c: ord){				if(isLetter(c))		words[ord]++;
		cout << "Character statistics:" << endl;
		cout << "Total number of characters: " << totchar << endl;
		cout << "Amount of words: " << totword << endl;

	
	}
}