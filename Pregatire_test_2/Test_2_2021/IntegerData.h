#pragma once
#include "Entry.h"
#include <string>
#include <iostream>

using namespace std;

class IntegerData : public Entry
{
protected:
	int value;
public:
	IntegerData(string name, string value) : Entry(name), value(stoi(value)) {}

	void Add(string toAdd)
	{
		value += stoi(toAdd);
	}

	bool Subtract(int toSubtract)
	{
		if (value < toSubtract)
		{
			cout << "IntegerData: value < " << toSubtract << '\n';
			return 0;
		}
		value -= toSubtract;
		return 1;
	}

	void Print()
	{
		cout << name << " = " << value << ";";
	}
};