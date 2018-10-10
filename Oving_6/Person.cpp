#include "Person.h"
#include "Car.h"
#include<string>


Person::Person(string name, string email, Car* car){
	this->name = name;
	this->email = email;
	this->car = car;
}

Person::Person(string name, string email) : Person(name, email, nullptr) {}

string Person::getEmail()const {
	return email;
}

string Person::getName()const {
	return name;
}

void Person::setEmail(string email) {
	email = this->email;
}

bool Person::hasAvailableSeats()const {
	return (car != nullptr && car->hasFreeSeats());
}

ostream &operator<<(ostream &output, const Person &p) {
	output << "Name: " << p.getName() << "\tEmail: " << p.getEmail();
	return output;
}

bool Person::operator < (const Person &p2) {
	return getName() < p2.getName();
}

bool Person::operator==(const Person &p2) {
	return getName() == p2.getName();
}

