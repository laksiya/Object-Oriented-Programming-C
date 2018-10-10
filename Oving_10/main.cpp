#include "1_Vector.h"

int main() {

	Matrix a(3, 3);
	cout << "Hello a" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a.set(i, j, 8);
			cout << "Hello a for" << endl;
		}
	}
	cout << a << endl;

	Vector b(3);

	for (int i = 0; i < 3; i++) {
		b.set(i, 5);
		cout << "Hello b for" << endl;
	}
	cout << b << endl;
	Vector c(a);
	cout << c << endl;
	double d = c.dot(b);
	cout << d << endl;
}