#pragma once
#include <iostream>
#include <string>
#include "Printer.h"
using namespace std;

class Hexazecimal : public Printer
{
public:
	string GetFormatName()
	{
		return "Hexazecimal";
	}

	string FormatNumber(int number)
	{
		string hex_digits = "0123456789ABCDEF";
		string ans="";
		for (int i = 9; i >= 2; i--)
		{
			ans += hex_digits[number & 0xF];
			number >>= 4;
		}
		ans += "x0";
		
		for (int i = 0; i < ans.size() / 2 ; i++)
		{
			swap(ans[i] , ans[ans.size() - i - 1]);
		}
		return ans;
	}
};