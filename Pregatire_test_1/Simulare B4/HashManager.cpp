#include "HashManager.h"
#include "Hash.h"
#include <iostream>
HashManager::HashManager()
{
	hashes = new Hash * [255];
	nr_hashes = 0;
	phrases = new char* [255];
}



HashManager& HashManager:: operator[](const char* text)
{

	int l = 0;
	while (text[l] != '\0')
		l++;
	phrases[nr_hashes] = new char[l + 1];
	for (int i = 0; i < l; i++)
		phrases[nr_hashes][i] = text[i];
	phrases[nr_hashes][l] = '\0';
	return *this;
}

Hash *& HashManager::operator=(Hash* a)
{
	hashes[nr_hashes] = a;
	hashes[nr_hashes]->setHash(phrases[nr_hashes]);
	nr_hashes++;
	return hashes[nr_hashes - 1];
}
void HashManager::print_hashes(const char* text)
{
	std::cout << text << '\n';
	for (int i = 0; i < nr_hashes; i++)
		std::cout << hashes[i]->getName() << ": " << hashes[i]->getValue() << '\n';
}