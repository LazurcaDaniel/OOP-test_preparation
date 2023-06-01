#pragma once
#include <string>
using namespace std;
class Entry
{
protected:
	string name;
public:
	virtual void Add(string toAdd) = 0;
	virtual bool Subtract(int toSubtract) = 0;
	virtual void Print() = 0;

	Entry(string name) : name(name){}
	string GetName()
	{
		return name;
	}
};