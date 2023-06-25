#pragma once
#include <string>
#include <cstring>
#include "Procesor.h"

using namespace std;

class ComputeVowals : public Procesor
{
private:
	string name1;

public:

	ComputeVowals(string v) : name1(v) {};
	string GetName()
	{
		return name1;
	}
	int Compute(string value)
	{
		int ans = 0;
		string vowals = "aeiouAEIOU";
		for (int i = 0; i < value.size(); i++)
		{
			for(int j=0; j<10; j++)
				if (value[i] == vowals[j])
				{
					ans++;
					break;
				}
		}
		return ans;
	}
};