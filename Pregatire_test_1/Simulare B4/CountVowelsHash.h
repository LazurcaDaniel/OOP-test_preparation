#pragma once
#include "Hash.h"
class CountVowelsHash : public Hash
{
public:
	CountVowelsHash();
	int calculate(const char* text);
	void setHash(const char* text);
	int getValue();
	char* getName();
};

