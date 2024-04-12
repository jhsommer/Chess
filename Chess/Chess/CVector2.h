#pragma once
class CVector2
{
public:
	float x, y;

	CVector2(float _x, float _y);

	CVector2 Add(const CVector2& _Other) const;

	void DoAdd(const CVector2& _Other);

	void Rotate(const float _fAngleDeg);

	float Distance(const CVector2& _Other) const;

};


CVector2 operator+(const CVector2& _First, const CVector2& _Second);

CVector2 operator*(const CVector2& _Vec, const float _scalar);

