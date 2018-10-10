#include "cannonball.h"
#include<cmath>
#include<ctime>
#include<iostream>
using namespace std;

int main() {
	double distanceToTarget, velocityX, velocityY, theta, absVelocity, resultat, result, expected;
	int tall=21;
	while (tall != 0) {
		std::cout << " " << endl;
		std::cout << " " << endl;
		cout << "Valgmeny:" << endl;
		cout << "1)targetPractice" << endl;
		cout << "2)getDistanceTraveled" << endl;
		cout << "3)getVelocityVector" << endl;
		cout << "4)Verifisering av oppgave 3" << endl;
		cout << "5)getUserInput" << endl;
		cout << "6)degToRad" << endl;
		cout << "7)randomWithLimits -men samme rekkefølge" << endl;
		cout << "8)randomWithLimits - med seed" << endl;
		cout << "9)playwithTarget" << endl;
		cout << "0)Avslutt" << endl;
		cout << "Velg et tall på menyen:" << endl;
		cin >> tall;

		
		switch (tall){
		case 0:
			break;

		case 1: 
			cout << "distanceToTarget:" << endl;
			cin >> distanceToTarget;
			cout << "velocityX:" << endl;
			cin >>velocityX;
			cout << "velocityY:" << endl;
			cin >> velocityY;
			resultat = targetPractice(distanceToTarget, velocityX, velocityY);
			cout << "Resultat: " << resultat << endl;
			break;

			case 2: 
				cout << "velocityX:" << endl;
				cin >>velocityX;
				cout << "velocityY:" << endl;
				cin >> velocityY;
				resultat = getDistanceTraveled(velocityX, velocityY);
				cout << "Resultat: " << resultat << endl;
				break;
			
			case 3: 
				cout << "theta:" << endl;
				cin >> theta;
				cout << "absVelocity:" << endl;
				cin >> absVelocity;
				getVelocityVector(theta, absVelocity, &velocityX, &velocityY);
				cout << "Resultat velocityX: " << &velocityX << " Resultat velocityY: " << &velocityY << endl;
				break;
			
			case 4:
				result = posX(0, 50.0, 5.0); /* initPosition, initVelocity, time */
				expected = 250.0;
				std::cout << "result:" << result << " expected:" << expected << std::endl;

				result = posY(31.84, 0.475, 2.5);
				expected = 2.375;
				std::cout << "result:" << result << " expected:" << expected << std::endl;

				result = velY(25.0, 5.0);
				expected = -24.05;
				std::cout << "result:" << result << " expected:" << expected << std::endl;

				for (int i = 1000; i <= 6000; i = i + 1000) {
					printTime(i);
				}

				result = flightTime(25.0);
				std::cout << "result:" << result << " expected:between 2.5 and 5" << std::endl;
				break;

			case 5:
				getUserInput(&theta, &absVelocity);
				break;

			case 6:
				for (int k = 30; k >= 480; k += 30) {
					degToRad(k);
				}
				break;

			case 7:
				for (int i = 0; i <= 100; i++) {
					result = randomWithLimits(10, 20);
					cout << "Tilfeldig tall: " << result << endl;
				}
				break;

			case 8:
				std::srand((int)std::time(nullptr));				for (int i = 0; i <= 100; i++) {
					result = randomWithLimits(10, 20);
					cout << "Tilfeldig tall: " << result << endl;				}				break;			case 9:				playTargetPractice();
			default:
				cout << "Ugyldig inntasting " << endl;
				break;
		}

	}
}

