#include<iostream>
#include <cstdlib>
using namespace std;

int randomWithLimits(int nedre, int ovre){
	int dif = ovre - nedre;
	int tilfeldig_tall = std::rand()%(dif+1);
	return tilfeldig_tall + nedre;
}