#include <iostream>
#include "DataBase.h"
#include "Entry.h"
#include "StringData.h"
#include "IntegerData.h"
#include <string>

using namespace std;

int main() 
{ 
	Database d; 
	Entry* e1 = (Entry*)new StringData("Student", "Alexandru"); 
	Entry* e2 = (Entry*)new IntegerData("NotaEngleza", "10"); 
	(d += e1) += (new StringData("Facultate", "FII")); 
	(d += e2) += (new IntegerData("NotaPOO", "9")); 
	d.Print(); 
	for (Entry* e : d) 
	{ 
		e->Subtract(5); 
	} 
	d.Print(); 
	d -= "NotaEngleza"; 
	d.Print(); 
	for (auto e : d) 
	{ 
		e->Add("1"); 
	} d.Print(); 
	return 0; 
}