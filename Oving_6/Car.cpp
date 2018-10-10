#include "Car.h"
#include <iostream>
using namespace std;


bool Car::hasFreeSeats() const{
	return (freeSeats > 0);
}

void Car::reserveFreeSeat() {
	if(freeSeats) freeSeats--;
}

Car::Car() {
	cout << "How many free seats? " << endl;
	cin >> freeSeats;
}