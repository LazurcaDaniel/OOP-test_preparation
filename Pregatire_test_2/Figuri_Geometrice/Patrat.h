#pragma once
#include "Figura_Geometrica.h"

class Patrat : public FiguraGeometrica
{
private:
	int x, y, dimensiuneLatura;
public:
	Patrat(int x, int y, int dim) : x(x), y(y), dimensiuneLatura(dim) {}

	float GetSuprafata()
	{
		return dimensiuneLatura * dimensiuneLatura;
	}
	
	float GetPerimetru()
	{
		return 4 * dimensiuneLatura;
	}
	

};