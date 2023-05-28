#pragma once
#include "Hash.h"
class HashManager
{
private:
	int nr_hashes;
	Hash** hashes;
	char** phrases;
public:
	HashManager();
	void print_hashes(const char* text);
	HashManager& operator[](const char* text);
	Hash*& operator=(Hash* a);

};

