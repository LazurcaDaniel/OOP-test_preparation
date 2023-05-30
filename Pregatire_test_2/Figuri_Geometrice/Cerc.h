#pragma once
#include "Figura_Geometrica.h"
#define pi 3.1415
class Cerc : public FiguraGeometrica
{
protected:
	int x, y, raza;
public:
	
	Cerc(int x, int y, int r) : x(x), y(y), raza(r) {}

	float GetSuprafata()
	{
		return 1.0*pi*raza*raza;
	}

	float GetPerimetru()
	{
		return 2.0*pi*raza;
	}
};