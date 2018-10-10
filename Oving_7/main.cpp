#include <iostream>
#include "opp1-fibonacci.h"
#include "opp2-matrise.h"
#include "opp3-dummyTest.h"
using namespace std;

int main() {
	//Matrix b;
	//cout << b;

	//Matrix a(4, 3);
	//cout << a;

	//cout << endl;
	//Matrix m(5);
	//cout << m;

	//dummyTest();

	Matrix A(2, 2);
	Matrix B(2, 2);
	Matrix C(2, 2);

	A.set(1, 1, 1.0);
	A.set(1, 2, 2.0);
	A.set(2, 1, 3.0);
	A.set(2, 2, 4.0);

	B.set(1, 1, 4.0);
	B.set(1, 2, 3.0);
	B.set(2, 1, 2.0);
	B.set(2, 2, 1.0);

	C.set(1, 1, 1.0);
	C.set(1, 2, 3.0);
	C.set(2, 1, 1.5);
	C.set(2, 2, 2.0);

	cout << A;
	cout << endl;
	cout << B;
	cout << endl;
	cout << C;
	cout << endl;

	Matrix D = A;
	Matrix E;
	E = A;
	
	cout << D;
	cout << endl;
	cout << E;

	A += B+C;
	cout << endl << A << endl;

}

/*Test løsningen din. Definer matrisene A, B og C som følger, og sjekk at du får svar som
forventet av A += B + C.

, C =
"
1.0 3.0
1.5 2.0
#
Svar: B og C skal være uendret. A =
"
6.0 8.0
6.5 7.0
#*/

