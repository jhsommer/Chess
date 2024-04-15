#include "Poligon.h"
#include <iostream>



Poligon::Poligon(const std::vector<CVector2>& _points, const int& _color) :
	m_Points(_points),
	m_Color(_color)
{}

void Poligon::RenderLine(SDL_Renderer* _ren) const
{
	SDL_SetRenderDrawColor(_ren, m_Color, m_Color, m_Color, SDL_ALPHA_OPAQUE);
	for (int i = 1; i < m_Points.size(); i++) {
		SDL_RenderDrawLine(_ren, (int)m_Points[i - 1].x, (int)m_Points[i - 1].y, (int)m_Points[i].x, (int)m_Points[i ].y);
	}
	SDL_RenderDrawLine(_ren, (int)m_Points[m_Points.size()-1].x, (int)m_Points[m_Points.size() - 1].y, (int)m_Points[0].x, (int)m_Points[0].y);

}

void Poligon::RenderRect(SDL_Renderer* _ren) const
{
	if (m_Points.size() > 3) {
		SDL_Rect rect = { m_Points[0].x,m_Points[0].y,m_Points[2].x - m_Points[0].x , m_Points[2].y - m_Points[0].y };
		SDL_SetRenderDrawColor(_ren, m_Color, m_Color, m_Color, SDL_ALPHA_OPAQUE);
		SDL_RenderFillRect(_ren, &rect);
	}
}