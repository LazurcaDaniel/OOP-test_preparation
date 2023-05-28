#pragma once
class Matrix
{
	int w, h;
	int** mat;
public:
	Matrix(const int x1, const int x2);
	~Matrix();
	void fill(const int x);
	int& operator() (const int i, const int j);
	int operator[](const char* s);
	void print();
	bool is_square_matrix();
	bool is_identity_matrix();
	bool operator==(Matrix x);
};

