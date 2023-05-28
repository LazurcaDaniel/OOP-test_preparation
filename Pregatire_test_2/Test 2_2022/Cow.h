#pragma once
#pragma once
#include "Animal.h"
#include <string>
using namespace std;

class Cow : public Animal
{
public:
	string GetName()
	{
		return "Cow";
	}
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