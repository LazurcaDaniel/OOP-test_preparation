#include <iostream>
#include "Zoo.h"
#include "Cow.h"
#include "Eagle.h"
#include "Shark.h"
#include "Tiger.h"
#include "Lion.h"
using namespace std;

int main()
{
	Zoo z;
	z += new Cow();
	z += new Eagle();
	z += new Shark();
	z += new Tiger();
	z += new Lion();

	cout << "Total animals in zoo: " << z.GetTotalAnimals() << '\n';

	for (auto a : z.GetFishes())
		cout << "Fish: " << a->GetName() << '\n';
	for (auto a : z.GetBirds())
		cout << "Bird: " << a->GetName() << '\n';
	for (auto a : z.GetMammals())
		cout << "Mammal: " << a->GetName() << '\n';
	for (auto a : z.GetFelines())
		cout << "Feline: " << a->GetName() << ", speed: " << a->GetSpeed() << '\n';

	cout << "Zoo contains a Tiger: " << boolalpha << z("Tiger") << '\n';
	cout << "Zoo contains a Monkey: " << boolalpha << z("Monkey") << '\n';
}