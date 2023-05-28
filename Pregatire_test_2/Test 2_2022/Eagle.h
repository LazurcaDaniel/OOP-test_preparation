#pragma once
#pragma once
#include "Animal.h"
#include <string>
using namespace std;

class Eagle : public Animal
{
public:
	string GetName()
	{
		return "Eagle";
	}
	bool isAFish()
	{
		return false;
	}
	bool isABird()
	{
		return true;
	}
	bool isAMammal()
	{
		return false;
	}
};