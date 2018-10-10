#pragma once
#include <string>
#include "Car.h"
using namespace std;

class Person {
private:
	string name;
	string email;
	Car* car;
public:
	Person(string name, string email, Car* car);
	Person(string name, string email);
	string getEmail() const;
	string getName() const;
	void setEmail(string email);
	bool hasAvailableSeats()const;
	friend ostream &operator<<(ostream &output, const Person &p);
	bool operator < (const Person &p2);
	bool operator==(const Person &p2);
};