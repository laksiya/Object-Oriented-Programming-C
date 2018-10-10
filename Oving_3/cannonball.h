#pragma once
#include "utilities.h"
double acclY();double velY(double initVelocityY, double time);double posX (double initPosition, double initVelocity, double time);double posY (double initPosition, double initVelocity, double time);void printTime(int sek);double flightTime(double initVelocityY);double targetPractice(double distanceToTarget, double velocityX, double velocityY);double getDistanceTraveled(double velocityX, double velocityY);void getVelocityVector(double theta, double absVelocity, double *velocityX, double *velocityY);
double getVelocityY(double theta, double absVelocity);
double getVelocityX(double theta, double absVelocity);
double degToRad(double deg);
void getUserInput(double* theta, double *absVelocity);
void playTargetPractice();