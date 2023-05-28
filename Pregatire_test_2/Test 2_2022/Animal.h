#pragma once

#include <string>
using namespace std;

class Animal
{
public:
	virtual string GetName() = 0;
	virtual bool isAFish() = 0;
	virtual bool isABird() = 0;
	virtual bool isAMammal() = 0;
};