#include "Catalog.h"
#include "Student.h"
#include <iostream>
Catalog::Catalog()
{
	nr_students = 0;
	students = new Student * [255];
}

void Catalog::operator+=(const char* nume)
{
	students[nr_students] = new Student(nume);
	nr_students++;
}


Student& Catalog::operator[](const char* name)
{
	for (int i = 0; i < nr_students; i++)
	{
		int  j = 0;
		bool ok = 1;
		while (students[i]->GetName()[j] != '\0')
		{
			
			if (students[i]->GetName()[j] != name[j])
			{
				ok = 0;
				break;
			}
			j++;
			
		}		
		if (ok)
			return *students[i];
	}
}

int Catalog::GetCount()
{
	return nr_students;
}

Student& Catalog::operator[](int index)
{
	return *students[index];
}