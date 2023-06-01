#pragma once
#include "Entry.h"
#include <string>
#include <iostream>

using namespace std;

class StringData : public Entry
{
protected:
	string value;
public:
	StringData(string name, string value) : Entry(name), value(value){}

	void Add(string toAdd)
	{
		value += toAdd;
	}

	bool Subtract(int toSubtract)
	{
		if (toSubtract > size(value))
		{
			cout << "StringData: len(" << value << ") < " << toSubtract << '\n';
			return 0;
		}
		value.erase(size(value) - toSubtract);
		return 1;
	}

	void Print()
	{
		cout << name << " = " << value << ";";
	}
	
};