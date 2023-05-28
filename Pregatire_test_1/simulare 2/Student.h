#pragma once
class Student
{
private:
	int nr_materii;
	char** materii;
	int* note;
	char* nume;
public:
	Student(const char* name);
	char* GetName();
	Student& operator[](const char* name);
	void operator=(const int x);
	void PrintNote();
	operator float();
};

