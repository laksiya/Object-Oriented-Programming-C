#pragma once
using namespace std;
#include <map>


class CourseCatalog {
	map<string, string> emne;
public:
	friend ostream& operator<<(ostream& os, const CourseCatalog& c);
	void addCourse(string emnekode, string emnenavn);
	void removeCourse(string emnekode);
	string getCourse(string emnekode);

};

void saveInfo(string file, CourseCatalog& c);
void loadInfo(string file, CourseCatalog& c);
