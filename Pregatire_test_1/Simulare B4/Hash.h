#pragma once
class Hash
{
public:
	virtual int calculate(const char* text) = 0;
	virtual void setHash(const char* text) = 0;
	virtual int getValue() = 0;
	virtual char* getName() = 0;
protected:
	char* name;
	int value;
};

