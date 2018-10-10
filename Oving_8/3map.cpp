#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <sstream>
#include "3map.h"
using namespace std;


ostream& operator<<(ostream& os,const CourseCatalog& c) {
	map<string, string>::const_iterator iter;
	for (iter = c.emne.begin(); iter != c.emne.end(); iter++)
	{
		 os << iter->first << " - " << iter->second << endl;
	}
	return os;
}

void CourseCatalog::addCourse(string emnekode, string emnenavn) {
	this->emne[emnekode]=emnenavn;
}
void CourseCatalog::removeCourse(string emnekode) {
	emne.erase(emnekode);
}
string CourseCatalog::getCourse(string emnekode) {
	return this->emne[emnekode];
}


void loadInfo(string file, CourseCatalog& c) {
	ifstream input(file);
	if (input.fail()) {
		cout << "Error opening file" << endl;
		exit(1);
	}

	string line;
	string emnekode;
	string emnenavn;

	while (getline(input, line)) {
		emnekode = line.substr(0, 6);
		emnenavn = line.substr(10, line.size());
		c.addCourse(emnekode, emnenavn);
	}
	input.close();

}

void saveInfo(string file, CourseCatalog& c) {
	ofstream output(file);
	if (output.fail()) {
		cout << "Error opening file" << endl;
		exit(1);
	}

	output << c;
	output.close();
}