#include <iostream>

//OPPGAVE A
int maxOfTwo(int a, int b) {
	int largest;
	if (a > b) {
		std::cout << "A is greater than B" << std::endl;
		largest = a;
		return a;
	}
	else {
		std::cout << "B is greater than A" << std::endl;
		largest = b;
		return b;
	}
}

//OPPGAVE C
int fibonacci(int n) {
	int a = 0;
	int b = 1;
	std::cout << "Fibonacci numbers:" << std::endl;
	for (int x = 1; x < n; x++) {
		std::cout << (x) << ": " << (b) << std::endl;
	}
	int temp = b;
	b = a + b;
	a = temp;
	std::cout << "----" << std::endl;
	return b;
}

//OPPGAVE D
int squareNumberSum(int n) {
	int totalSum = 0;
	for (int i = 1; i < n; i++) {
		totalSum = totalSum + i*i;
		std::cout << (i*i) << std::endl;
	}
	return totalSum;
}

//OPPGAVE E
int triangleNumbersBelow(int n) {
	int acc = 1;
	int num = 2;
	std::cout << "Triangle numbers below " << (n) << ": " << std::endl;
		int i = 1;
	while (acc < n) {
		acc = acc + num;
		num = num + 1;
		return acc;
	}
	std::cout << " " << std::endl;
}

int isTriangleNumber(int number){
int acc = 1;
int truthValue;
while (number > 0) {
	number = number - acc;
	acc = acc + 1;
}
if (number == 0) {
	 truthValue = true;
}
else {
	 truthValue = false;
}
return truthValue;
}

//OPPGAVE F
int isPrime(int n) {
	int primeness = true;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			primeness = false;
			break;
		}
	}
	return primeness;
}

//OPPGAVE G
int naivePrimeNumberSearch(int n){
for (int number = 2; number < n; number++){
if (isPrime(number) == true){
std::cout << (number) << " is a prime" << std::endl;
}
}
return 0;
}


//OPPGAVE H
int findGreatestDivisor(int n) {
	int greatestDivisor;
	for (int divisor = (n - 1); divisor > -1; divisor--)
		if (n % divisor == 0) {
			greatestDivisor = divisor;
			break;
		}
	return greatestDivisor;
}


		//KJØREPROGRAM
		int main() {
		std::cout << "Oppgave a)" << std::endl;
		std::cout << maxOfTwo(5, 6) << std::endl;
		std::cout << "Oppgave c)" << std::endl;
		std::cout << fibonacci(5) << std::endl;
		std::cout << "Oppgave d)" << std::endl;
		std::cout << squareNumberSum(5) << std::endl;
		std::cout << "Oppgave e)" << std::endl;
		std::cout << triangleNumbersBelow(110) << std::endl;
		std::cout << isTriangleNumber(10) << std::endl;
		std::cout << "Oppgave f)" << std::endl;
		std::cout << isPrime(3) << std::endl;
		std::cout << "Oppgave g)" << std::endl;
		std::cout << naivePrimeNumberSearch(100) << std::endl;
		std::cout << "Oppgave h)" << std::endl;
		std::cout << findGreatestDivisor(1234) << std::endl;
	
	}



