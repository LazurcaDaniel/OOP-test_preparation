#pragma once
#include "Animal.h"
#include "Feline.h"
#include <vector>
using namespace std;
class Zoo
{
private:
	vector<Animal*> list;
public:
	
	void operator += (Animal* x)
	{
		list.push_back(x);
	}
	
	bool operator() (string Name)
	{
		for (auto a : list)
		{
			if (a->GetName() == Name)
				return true;
		}
		return false;
	}

	vector<Animal*> GetFishes()
	{
		vector<Animal*> x;
		for (auto a : list)
		{
			if (a->isAFish())
				x.push_back(a);
		}
		return x;
	}
	vector<Animal*> GetBirds()
	{
		vector<Animal*> x;
		for (auto a : list)
		{
			if (a->isABird())
				x.push_back(a);
		}
		return x;
	}
	vector<Animal*> GetMammals()
	{
		vector<Animal*> x;
		for (auto a : list)
		{
			if (a->isAMammal())
				x.push_back(a);
		}
		return x;
	}

	vector<Feline*> GetFelines()
	{
		vector<Feline*> x;
		for (auto a : list)
		{
			Feline* feline = dynamic_cast<Feline*>(a);
			if (feline != nullptr)
				x.push_back(feline);
		}
		return x;
	}

	int GetTotalAnimals()
	{
		return list.size();
	}
	
};