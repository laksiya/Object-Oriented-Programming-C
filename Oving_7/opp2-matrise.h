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
	bool isValid() {return pekertabell != nullptr;}
	double get(int row, int col) const;
	void set(int row, int col, double value);
	int getHeight() { return rows; }
	int getWidth() { return coloumns; }

	Matrix(const Matrix &a) : Matrix(a.rows, a.coloumns){
		for (int row = 0; row < a.rows; row++) {
			for (int col = 0; col < a.coloumns; col++) {
				pekertabell[row][col] = a.pekertabell[row][col];
			}
		}

	}

	Matrix& operator=(Matrix a) {
		std::swap(pekertabell, a.pekertabell);
		std::swap(rows, a.rows);
		std::swap(coloumns,a.coloumns);
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
