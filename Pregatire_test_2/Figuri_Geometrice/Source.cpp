#include <iostream>
#include "Figura_Geometrica.h"
#include "Cerc.h"
#include "Oval.h"
#include "Patrat.h"
using namespace std;

int main()
{
	FiguraGeometrica *x = new Cerc(1, 4, 3);
	cout << x->GetPerimetru() << " " << x->GetSuprafata() << '\n';

	FiguraGeometrica* y = new Patrat(1, 4, 5);
	cout << y->GetPerimetru() << " " << y->GetSuprafata() << '\n';

	FiguraGeometrica* z = new Oval(1, 4, 5, 6);
	cout << z->GetSuprafata() << '\n';
}