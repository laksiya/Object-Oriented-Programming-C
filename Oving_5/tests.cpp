#include <iostream>
#include "utilities.h";
#include "tests.h";
using namespace std;

void testCallByValue() { 
	int v0 = 5; 
	int increment = 2; 
	int iterations = 10; 
	int result = incrementByValueNumTimes(v0, increment, iterations); 
	std::cout << "v0: " << v0 << " increment: " << increment << " iterations: " << iterations << " result: " << result << std::endl;
} 

void testCallByPointer() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	incrementByValueNumTimes2(&v0, increment, iterations);
	std::cout << "v0: " << v0 << " increment: " << increment << " iterations: " << iterations << std::endl;
}

void testSwapNumber() {
	for (int i = 1; i <= 20; i++) {
		int a = i;
		int b = i * 8;
		cout << "a:" << a << " b:" << b << endl;
		swapNumbers(&a, &b);
		cout << "a:" << a << " b:" << b << endl;
	}

}

void testTablessorting() {
	int percentages[20] = {};
	printArray(percentages,20);
	randomizeArray(percentages, 20);
	printArray(percentages, 20);
	swapNumbers(&percentages[0], &percentages[1]);
	printArray(percentages, 20);

}

void testSortArray() {
	int percentages[20] = {};
	printArray(percentages, 20);

	randomizeArray(percentages, 20);
	printArray(percentages, 20);

	swapNumbers(&percentages[0], &percentages[1]);
	printArray(percentages, 20);

	medianOfArray(percentages, 20);

	sortArray(percentages, 20);
	printArray(percentages, 20);

	medianOfArray(percentages, 20);

}

void testCStrings_input() {
	char grades[21] = {};
	grades[20] = '\0';
	readInputtoStrings(21, grades, 'A', 'E');
	cout << grades << endl;

	int gradeCount[6] = {};
	int num = 0;
	for (char bokstav = 'A'; bokstav <= 'F'; bokstav++) {
		int ant = countOccurenceOfCharacther(grades, 21, bokstav);
		gradeCount[num] = ant;
		num++;
	}
	printArray(gradeCount, 6);

	double sum=0;
	for (int i = 0; i < 6; i++) {
		 sum = sum + (static_cast<double>(gradeCount[i])*(i+1));
	}
	double svar = sum / 20;
	cout << "Snittet er: " << svar << endl;
}

void testcountOccurenceOfCharacther() {
	char table[] = "hallo alle sammen";
		countOccurenceOfCharacther(table, 18, 'l');
}

void testCStrings() {
	char grades[21] = {};
	grades[20] = '\0';
	randomizeCstring(grades, 21, 'A', 'E');
	cout << grades << endl;

	int gradeCount[6] = {};
	int num = 0;
	for (char bokstav = 'A'; bokstav <= 'F'; bokstav++) {
		int ant = countOccurenceOfCharacther(grades, 21, bokstav);
		gradeCount[num] = ant;
		num++;
	}
	printArray(gradeCount, 6);

	double sum = 0;
	for (int i = 0; i < 6; i++) {
		sum = sum + (static_cast<double>(gradeCount[i])*(i + 1));
	}
	double svar = sum / 20;
	cout << "Snittet er: " << svar << endl;
}

