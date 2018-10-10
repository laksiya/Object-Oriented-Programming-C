#include "cannonball.h"
#include<cmath>
#include<iostream>
using namespace std;

void playTargetPractice() {
	double target;
	double theta, absVelocity, velocityY, velocityX;
	int vinn = 0;
	target = randomWithLimits(100, 1000); //Genererer et tilfeldig tall
	std::cout << "Du har 10 forsøk" << endl;
	for (int i = 1; i <= 10; i++) {
		std::cout << "Forsøk nr. " << (i) << endl;

		getUserInput(&theta, &absVelocity); //Henter theta og absfart


		getVelocityVector(theta, absVelocity, &velocityX, &velocityY);

		int avstand = targetPractice(target, velocityX, velocityY); //Finner avstand

																	//Vurderer avstand
		if (avstand < 5 && avstand > -5) {
			std::cout << "Gratulerer, du traff! Du har vunnet!" << endl;
			int vinn = 1;
			break;
		}
		else {
			if (avstand < 0) {
				std::cout << "Du bommet med " << avstand << "meter. For langt" << endl;
			}
			else {
				std::cout << "Du bommet med " << avstand << "meter. For kort"<< endl;
			}
		}
	}
	if (vinn != 0) {
		std::cout << "Du har brukt opp alle dine forsøk! Du tapte!" << endl;
	}
}
double acclY(){
	double a=-9.81;
	return a;
}

double velY(double initVelocityY, double time) {
	double fartY = initVelocityY + acclY() * time;
	return fartY;
}

double posX(double initPosition, double initVelocity, double time) {
	return initPosition + initVelocity* time + time*time / 2 * 0;
}
double posY(double initPosition, double initVelocity, double time) {
	return initPosition + initVelocity* time + time*time / 2 * acclY();
}

void printTime(int sek) {
	int rest = sek % 3600;
	int timer = sek / 3600;
	double sekund = rest % 60;
	int min = rest / 60;
		std::cout << timer << ":" << min << ":" << sekund << std::endl;
}

double flightTime(double initVelocityY) {
	return -2 * initVelocityY / acclY();
}

// Ber brukeren om to tall, en vinkel (i grader), og en fart.
// Disse verdiene skal lagres i minnet som pekerne
// theta og absVelocity peker paa.
void getUserInput(double* theta, double *absVelocity){
	std::cout << "Skriv inn to tall, en vinkel (i grader), og en fart:" << std::endl;
	std::cin >> *theta;
	std::cin >> *absVelocity;
}

//double theta, absVelocity;
//getUserInput(&theta, &absVelocity);



double degToRad(double deg) {
	deg = deg / 360 * 2 * 3.14;
	return deg;
}

// Returnerer henholdsvis farten i X-, og Y-retning, gitt en vinkel
// theta og en absoluttfart absVelocity.
double getVelocityX(double theta, double absVelocity) {
	theta = degToRad(theta);
	return cos(theta)*absVelocity;
}

double getVelocityY(double theta, double absVelocity) {
	theta = degToRad(theta);
	return sin(theta)*absVelocity;
}

// Dekomponerer farten gitt av absVelocity, i X- og Y-komponentene
// gitt vinkelen theta. Disse komponentene lagres i minnet.
void getVelocityVector(double theta, double absVelocity,double *velocityX, double *velocityY) {
	*velocityX = getVelocityX(theta, absVelocity);
	*velocityY = getVelocityY(theta,absVelocity);
}

double getDistanceTraveled(double velocityX, double velocityY) {
	double tid = flightTime(velocityY);
	return tid* velocityX;
}

double targetPractice(double distanceToTarget,double velocityX,double velocityY){
	double realX = getDistanceTraveled(velocityX, velocityY);
	return distanceToTarget - realX;
}





