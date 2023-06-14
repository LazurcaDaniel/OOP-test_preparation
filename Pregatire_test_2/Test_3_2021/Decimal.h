#pragma once
#include <iostream>
#include <string>
#include "Printer.h"
using namespace std;

class Decimal : public Printer
{
public:
	string GetFormatName()
	{
		return "Decimal";
	}

	string FormatNumber(int number)
	{
		return to_string(number);
	}
};