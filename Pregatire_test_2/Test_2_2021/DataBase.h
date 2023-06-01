#pragma once
#include "Entry.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Database
{
	vector<Entry*> list;
	
public:
	Database& operator +=(Entry* e)
	{
		list.push_back(e);
		return *this;
	}
	void operator -=(string name)
	{
		int i = 0;
		for (auto it : list)
		{
			if (it->GetName() == name)
			{	
				list.erase(list.begin() + i);
				break;
			}
			i++;
		}
	}

	vector<Entry*>::iterator begin()
	{
		return list.begin();
	}

	vector<Entry*>::iterator end()
	{
		return list.end();
	}

	void Print()
	{
		for (auto it : list)
		{
			it->Print();
		}
		cout << '\n';
	}
};