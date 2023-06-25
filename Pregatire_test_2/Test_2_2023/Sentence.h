#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Procesor.h"
using namespace std;

class Sentence
{
private:
	vector <Procesor*> procesators;
	string name;
public:
	Sentence(string name) : name(name) {};

	Sentence& operator +=(Procesor* x)
	{
		procesators.push_back(x);
		return *this;
	}

	void ListAll()
	{
		for (int i = 0; i < procesators.size(); i++)
		{
			cout << "Name:" << procesators[i]->GetName() << '\n';
		}
	}

	void RunAll()
	{
		for (int i = 0; i < procesators.size(); i++)
		{
			cout << "Name: " << procesators[i]->GetName() << " => " << procesators[i]->Compute(name) << '\n';
		}
	}

	void Run(string n)
	{
		for (int i = 0; i < procesators.size(); i++)
		{
			if (procesators[i]->GetName() == n)
			{		
				cout << procesators[i]->Compute(name) << '\n';
				break;
			}
		}
	}
};