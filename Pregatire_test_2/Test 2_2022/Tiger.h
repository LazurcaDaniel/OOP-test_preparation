#pragma once
#include "Feline.h"
#include "Animal.h"
#include <string>
using namespace std;

class Tiger : public Feline
{
	string GetName()
	{
		return "Tiger";
	}

	int GetSpeed()
	{
		return 100;
	}
};