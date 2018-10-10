#include "1_Vector.h"
using namespace std;
#include <iostream>
#include <cmath>

Matrix::Matrix() {
	this->pekertabell = nullptr;
}
Matrix::Matrix(int mRows, int nColumns) {
	this->rows = mRows;
	this->coloumns = nColumns;
	this->pekertabell = new double*[nColumns];
	for (int i = 0; i < nColumns; i++) {
		pekertabell[i] = new double[mRows];
		for (int k = 0; k < mRows; k++) {
			pekertabell[i][k] = 0;
		}
	}
}

Matrix::Matrix(int nRows) :Matrix(nRows, nRows) {
	for (int i = 0; i < nRows; i++) {
		pekertabell[i][i] = 1;
	}
}

ostream& operator<<(ostream& os, Matrix& m) {
	if (m.isValid()) {
		for (int i = 0; i < m.coloumns; i++) {
			for (int j = 0; j < m.rows; j++) {
				os << m.pekertabell[i][j] << " ";
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
	return pekertabell[col][row];
}
void Matrix::set(int row, int col, double value) {
	pekertabell[row ][col] = value;
}

Vector::Vector( Matrix & other) {
	if (other.getWidth() == 1 && other.isValid()) {
		*this = other;
		Matrix::operator=(other);
	}
	else {
		*this = Vector();
	}
}

void Vector:: set(int row, double value) {
	Matrix::set(row, 0, value);
}
double Vector::get(int row) const {
	return Matrix::get(row, 0);
};

double Vector::dot(const Vector &rhs) const {
	double dotproduct=0;
	if (rhs.isValid() && rhs.getHeight()==this->getHeight()) {
		for (int i = 0; i < rhs.getHeight(); i++) {
			dotproduct+= rhs.get(i)*this->get(i);
		}
	}
	else {
		dotproduct= NAN;
	}return dotproduct;
}	

double Vector::lengthSquared() const {
	double temp = 0;
	for (int i = 0; i < this->getHeight(); i++) {
		temp += this->get(i)*this->get(i);
	}
	return temp;
}

double Vector::length() const {
	return sqrt(this->lengthSquared());
}