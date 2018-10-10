#pragma once

#include <iostream>
using namespace std;

class Matrix {
private:
	int rows;
	int coloumns;
	double** pekertabell;
public:
	Matrix();
	Matrix(int mRows, int nColumns);
	explicit Matrix(int nRows);
	~Matrix() {
		for (int col = 0; col < coloumns; col++) {
			//delete pekertabell[col];
		}
		delete[] pekertabell;
		pekertabell = nullptr;
	}
	friend ostream& operator<<(ostream& os, Matrix& m);
	bool isValid()const { return pekertabell != nullptr; }
	double get(int row, int col) const;
	void set(int row, int col, double value);
	int getHeight()const { return rows; }
	int getWidth()const { return coloumns; }

	Matrix(const Matrix &a) : Matrix(a.rows, a.coloumns) {
		for (int row = 0; row < a.rows; row++) {
			for (int col = 0; col < a.coloumns; col++) {
				pekertabell[row][col] = a.pekertabell[row][col];
			}
		}

	}

	Matrix& operator=(Matrix a) {
		std::swap(pekertabell, a.pekertabell);
		std::swap(rows, a.rows);
		std::swap(coloumns, a.coloumns);
		return *this;
	}

	Matrix &operator+=(const Matrix& a) {
		if (a.rows != this->rows || a.coloumns != this->coloumns) {
			this->pekertabell = nullptr;
		}
		else {
			for (int i = 0; i < this->coloumns; i++) {
				for (int j = 0; j < this->rows; j++) {
					pekertabell[j][i] += a.pekertabell[j][i];
				}
			}
		}

		return *this;
	}

	Matrix operator+(const Matrix& a) const {
		Matrix m(*this);
		if (a.rows != m.rows || a.coloumns != m.coloumns) {
			m.pekertabell = nullptr;
		}
		else {
			m += a;
		}
		return m;
	}

};

class Vector : public Matrix {
public:
	Vector() :Matrix() {};
	explicit Vector(int nRows) : Matrix(nRows, 1) {};
	Vector::Vector(Matrix & other);	void set(int row, double value);	double get(int row) const;	double dot(const Vector &rhs) const;	double lengthSquared() const;	double length() const;
};

/*double dot(const Vector &rhs) const
• Skal returnere prikkproduktet (på engelsk «dot product») mellom this og rhs. Hvis
vektorene har forskjellig dimensjon, eller er ugyldige, skal du returnere nan("");. Denne
funksjonen finner du i <cmath>.
double lengthSquared() const
• Returnerer den kvadrerte lengden av vektoren.
double length() const
• Returnerer lengden av vektoren. Kvadratorota av en verdi kan beregnes med funksjonen
sqrt(double) som finnes i <cmath>-headeren.
Hint: Du kan gjenbruke dot-funksjonen for å beregne lengthSquared og gjenbruke lengthSquared
for å beregne length().*/
