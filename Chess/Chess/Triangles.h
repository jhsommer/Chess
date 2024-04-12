#pragma once
#include "SDL.h"
#include "CVector2.h"
#include <vector>

class Triangles
{
public:
	Triangles(const CVector2& _p1, const CVector2& _p2, const CVector2& _p3, const float& _color);
	void Render();


private:
	CVector2 Point1;
	CVector2 Point2;
	CVector2 Point3;

	float Color;
};

