#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "HashManager.h"
//#include "Hash.h"
#include "CountVowelsHash.h"
//#include "CountConsonantHash.h"
//#include "CountAsciiHash.h"
//#include "EasyHash.h";
using namespace std;

int main() 
{
    HashManager hashes;
    hashes["hevwoinfoes"]=new CountVowelsHash();
    //hashes["count_consonant"] = new CountConsonantHash();
    //hashes["count_ascii"] = new CountAsciiHash();
    //hashes["easy_ascii"] = new EasyHash();
    hashes.print_hashes("Did you ever hear the tragedy of Darth Plagueis the Wise?");
}