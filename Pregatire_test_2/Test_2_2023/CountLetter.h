#pragma once
#include <string>
#include <cstring>

#include "Procesor.h"

using namespace std;

class CountLetter : public Procesor
{
private:
	string name1;
	bool(*function)(const char);
public:

	CountLetter(string v , bool(*func)(const char)) : name1(v),function(func) {};
	string GetName()
	{
		return name1;
	}
	int Compute(string value)
	{
		int ans = 0;
		for (int i = 0; i < value.size(); i++)
		{
			ans += function(value[i]);
		}
		return ans;
	}
};