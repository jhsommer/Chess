#include "Triangles.h"
#include <iostream>

Triangles::Triangles(const CVector2& _p1, const CVector2& _p2, const CVector2& _p3, const float& _color) :
	Color(_color),
	Point1(_p1),
	Point2(_p2),
	Point3(_p3)
{
}

