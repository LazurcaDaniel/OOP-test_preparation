#include "CountVowelsHash.h"
#include <iostream>
CountVowelsHash::CountVowelsHash()
{
	value = 0;
	name = new char[10];
}

int CountVowelsHash::calculate(const char* text)
{
	const char* vowels = new char[11];
	vowels = { "aeiouAEIOU" };
	int count = 0, i = 0;
	while (text[i] != '\0')
	{	
		for (int index = 0; index < 10; index++)
			if (text[i] == vowels[index])
			{
				count++;
				break;
			}
		i++;
	}
	return count;
}

void CountVowelsHash::setHash(const char* text)
{
		int l = 0;
		while (text[l] != '\0')
			l++;
		name = new char[l + 1];
		for (int i = 0; i < l; i++)
			name[i] = text[i];
		name[l] = '\0';
		value = calculate(text);
}

char* CountVowelsHash::getName()
{
	return name;
}

int CountVowelsHash::getValue()
{
	return value;
}