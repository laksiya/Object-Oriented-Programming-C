#pragma once
class Car {
private:
	int freeSeats;
public:
	Car();
	bool hasFreeSeats() const;
	void reserveFreeSeat();
};