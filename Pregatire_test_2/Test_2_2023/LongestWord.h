#pragma once
#include <string>
#include "Procesor.h"

using namespace std;

class LongestWord : public Procesor
{
private:
	string name1;
public:
	LongestWord(string value) : name1(value) {};

	string GetName()
	{
		return name1;
	}

	int Compute(string value)
	{
		int ans = 0;
		int i = 0;
		
		while (i < value.size())
		{
			int local_word = 0;
			while (value[i] == ' ' && i < value.size())
				i++;
			while (value[i] != ' ' && i < value.size())
			{
				local_word++;
				i++;
			}
			if (local_word > ans)
				ans = local_word;
		}
		return ans;
	}

};