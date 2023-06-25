#pragma once
#include <string>

using namespace std;

class Procesor
{
public:
	virtual string GetName() = 0;
	virtual int Compute(string value) = 0;
};