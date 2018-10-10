#include "opp2-matrise.h"
using namespace std;
#include <iostream>

Matrix::Matrix() {
	this->pekertabell = nullptr;
}
Matrix::Matrix(int mRows, int nColumns) {
	this->rows = mRows;
	this->coloumns = nColumns;
	this-> pekertabell = new double* [nColumns];
	for (int i = 0; i < nColumns; i++) {
		pekertabell[i] = new double[mRows];
		for (int k = 0; k < mRows; k++) {
			pekertabell[i][k] = 0;
		}
	}
}

Matrix:: Matrix(int nRows):Matrix (nRows, nRows) {
	for (int i = 0; i < nRows	; i++) {
			pekertabell[i][i] = 1;
	}
}

ostream& operator<<(ostream& os, Matrix& m) {
	if (m.isValid()) {
		for (int i = 0; i < m.coloumns; i++) {
			for (int j = 0; j < m.rows; j++) {
				os << m.pekertabell[i][j]<< " ";
			}
			cout << endl;
		}
	}
	else {
		os << "INVALID MATRIX" << endl;
		}
	return os;
}


double Matrix::get(int row, int col) const {
	return pekertabell[col-1][row-1];
}
void Matrix::set(int row, int col, double value) {
	pekertabell[row-1][col-1] = value;
}

