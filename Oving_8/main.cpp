
#include <iostream>
#include <string>
#include "1-fil.h"
#include "2stats.h"
#include "3map.h"
using namespace std;

int main() {
	CourseCatalog c;

	c.addCourse("TDT4110", "Informasjonsteknologi grunnkurs");
	c.addCourse("TDT4102","Prosedyre- og objektorientert programmering ");
	c.addCourse("TMA4100","Matematikk 1");

	cout << c.getCourse("TDT4110") << endl;
	cout << c.getCourse("TDT4102") << endl;
	cout << c.getCourse("TMA4100") << endl;

	saveInfo("output.txt", c);

	CourseCatalog d;
	loadInfo("output.txt", d);
	cout << d;
	

	show_stats();

	system("pause");
	return 0;
}