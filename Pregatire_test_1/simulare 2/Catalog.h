#pragma once
#include "Student.h"
class Catalog
{
private:
	int nr_students;
	Student** students;
public:
	Catalog();
	void operator +=(const char* name);
	Student& operator[](const char* name);
	int GetCount();
	Student& operator[](int index);
};

