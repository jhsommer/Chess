#include "CVector2.h"
#include <math.h>

#define pi 3.14159265358

float DegToRad(float _fAngleDeg)
{
	return pi * _fAngleDeg / 180.0f;
}

CVector2::CVector2(float _x, float _y) :
	x(_x),
	y(_y)
{}


CVector2 CVector2::Add(const CVector2& _Other) const
{
	return CVector2(this->x + _Other.x, this->y + _Other.y);
}

CVector2 operator+(const CVector2& _First, const CVector2& _Second)
{
	return CVector2(_First.x + _Second.x, _First.y + _Second.y);
}

CVector2 operator*(const CVector2& _Vec, const float _scalar)
{
	return CVector2(_Vec.x * _scalar, _Vec.y * _scalar);
}

void CVector2::Rotate(const float _fAngleDeg)
{
	float angleRad = DegToRad(_fAngleDeg);
	float newX = cos(angleRad) * x - sin(angleRad) * y;
	float newY = sin(angleRad) * x + cos(angleRad) * y;
	x = newX;
	y = newY;
}

float CVector2::Distance(const CVector2& _Other) const {
	return sqrt((_Other.x - x) * (_Other.x - x) + (_Other.y - y) * (_Other.y - y));
}


void CVector2::DoAdd(const CVector2& _Other)
{
	this->x += _Other.x;
	this->y += _Other.y;
}
