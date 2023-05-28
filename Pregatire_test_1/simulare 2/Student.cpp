#include "Student.h"
#include <iostream>
Student::Student(const char* name)
{
	nr_materii = 0;
	note = new int[100];
	materii = new char* [255];
	int l = 0;
	while (name[l] != '\0')
		l++;
	nume = new char[l + 1];
	for (int i = 0; i < l; i++)
		nume[i] = name[i];
	nume[l] = '\0';
}

char* Student::GetName()
{
	return nume;
}

Student& Student::operator[](const char* name)
{
	int l = 0;
	while (name[l] != '\0')
		l++;
	materii[nr_materii] = new char[l];
	for (int i = 0; i < l; i++)
		materii[nr_materii][i] = name[i];
	materii[nr_materii][l]='\0';
	nr_materii++;
	return *this;
}

void Student::operator=(const int x)
{
	note[nr_materii-1] = x;
}

void Student::PrintNote()
{
	for (int i = 0; i < nr_materii; i++)
		std::cout << materii[i] << " => " << note[i] << '\n';
}

Student::operator float()
{
	float medie = 0;
	for (int i = 0; i < nr_materii; i++)
		medie += note[i];
	return (medie / nr_materii) * 1.0;
}