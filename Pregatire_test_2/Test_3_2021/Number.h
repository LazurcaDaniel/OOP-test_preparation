#pragma once
#include "Printer.h"

using namespace std;

class Number
{
private:
	int count;
	int number;
	Printer* printers[100];
public:
	Number(int value) : number(value), count(0) 
	{
		for (int i = 0; i < 100; i++)
			printers[i] = (Printer*)malloc(sizeof(Printer));
	};

	operator int()
	{
		return number;
	}

	Number operator +(Number n)
	{
		Number n1(number + int(n));
		return n1;
	}
	Number operator -(Number n)
	{
		Number n1(number - int(n));
		return n1;
	}
	Number operator *(Number n)
	{
		Number n1(number * int(n));
		return n1;
	}
	Number operator /(Number n)
	{
		if ((int)n != 0) 
		{
			Number n1(number / int(n));
			return n1;
		}
	}
	Number& operator += (Printer *prnt)
	{
		printers[count] = prnt;
		count++;
		return *this;
	}
	void Print()
	{
		for (int i = 0; i < count; i++)
			cout << "Format: " << printers[i]->GetFormatName() << " Value: " << printers[i]->FormatNumber(number) << '\n';
	}

};