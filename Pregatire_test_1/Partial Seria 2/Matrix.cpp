#include "Matrix.h"
#include <iostream>

Matrix::Matrix(const int x1, const int x2)
{
	w = x1;
	h = x2;
	mat = new int*[h+1];
	for (int i = 0; i < h; i++)
		mat[i] = new int[w+1];
}

void Matrix::fill(const int x)
{
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			mat[i][j] = x;
}



int& Matrix::operator()(const int i, const int j)
{
	return this->mat[j][i];
}

int Matrix::operator[](const char* s)
{
	if (s[0] == 'w' && s[1] == 'i' && s[2] == 'd' && s[3] == 't' && s[4] == 'h' && s[5] == '\0')
		return w;
	if (s[0] == 'h' && s[1] == 'e' && s[2] == 'i' && s[3] == 'g' && s[4] == 'h' && s[5] == 't'&&s[6]=='\0')
		return h;
	if (s[0] == 's' && s[1] == 'i' && s[2] == 'z' && s[3] == 'e' && s[4] == '\0')
		return w*h*4;

}

bool Matrix::is_square_matrix()
{
	return h == w;
}

bool Matrix::is_identity_matrix()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i == j && mat[i][j] != 1)
				return 0;
			else if (i != j && mat[i][j] != 0)
				return 0;
		}
	}
	return 1;
}

bool Matrix::operator==(Matrix s)
{
	if (this->w != s.w)
		return 0;
	if (this->h != s.h)
		return 0;
	for (int i = 0; i < this->h; i++)
		for (int j = 0; j < this->w; j++)
			if (this->mat[i][j] != s.mat[i][j])
				return 0;
	return 1;
}

void Matrix::print()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			std::cout << mat[i][j] << " ";
		std::cout << '\n';
	}
}

Matrix::~Matrix()
{
	w = 0;
	h = 0;
	for (int i = 0; i < h; i++)
	{
		delete[] mat[i];
	}
}