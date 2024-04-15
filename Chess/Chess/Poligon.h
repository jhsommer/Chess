#pragma once
#include <vector>
#include "SDL.h"
#include "CVector2.h"

class Poligon
{
	public:
		Poligon(const std::vector<CVector2>& _points, const int& _color);
		void RenderLine(SDL_Renderer* _ren) const;
		void RenderRect(SDL_Renderer* _ren) const;

	private:
		std::vector<CVector2> m_Points;
		int m_Color;
};

