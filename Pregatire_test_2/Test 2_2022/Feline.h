#pragma once
#include "Animal.h"
#include <string>
using namespace std;
class Feline : public Animal
{
public:
	virtual int GetSpeed() = 0;
	virtual string GetName() = 0;
	bool isAFish()
	{
		return false;
	}
	bool isABird()
	{
		return false;
	}
	bool isAMammal()
	{
		return true;
	}
};