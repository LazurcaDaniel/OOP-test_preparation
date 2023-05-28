#pragma once
#include "Animal.h"
#include <string>
using namespace std;

class Shark : public Animal
{
public:
	string GetName()
	{
		return "Shark";
	}
	bool isAFish()
	{
		return true;
	}
	bool isABird()
	{
		return false;
	}
	bool isAMammal()
	{
		return false;
	}
};