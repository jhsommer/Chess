#pragma once
#include <vector>
#include "SDL.h"
#include "CVector2.h"

class Poligon
{
	public:
		Poligon(const std::vector<CVector2>& _points, const float& _color);
		void Update();
		void RenderLine(SDL_Renderer& _ren) const;
		void RenderArea(SDL_Renderer* _ren) const;

	private:
		std::vector<CVector2> m_Points;
		float m_Color;
};

