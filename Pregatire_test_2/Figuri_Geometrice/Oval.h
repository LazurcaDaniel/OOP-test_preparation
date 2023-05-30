#pragma once
#include "Figura_Geometrica.h"
#include "Cerc.h"
#define pi 3.1415
class Oval : public FiguraGeometrica, public Cerc
{
private:
	int raza2;
public:

	Oval(int x, int y, int r1, int r2) : Cerc(x, y, r1), raza2(r2){}
	float GetSuprafata()
	{
		return 1.0 * pi * raza2 * raza;
	}

	float GetPerimetru()
	{
		///perimetru la oval e greu af de calculat
	}

};