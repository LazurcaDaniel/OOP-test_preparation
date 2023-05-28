#pragma once
#include "Feline.h"
#include "Animal.h"
#include <string>
using namespace std;

class Lion : public Feline
{
	string GetName()
	{
		return "Lion";
	}

	int GetSpeed()
	{
		return 80;
	}
};