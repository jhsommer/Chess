#include "Poligon.h"


Poligon::Poligon(const std::vector<CVector2>& _points, const float& _color) {
	m_Points = _points;
	m_Color = _color;
}

void Poligon::Update()
{
	
}

void Poligon::Render(SDL_Renderer& _ren) const
{
	for (int i = 1; i < m_Points.size(); i++) {
		SDL_RenderDrawLine(&_ren, (int)m_Points[i - 1].x, (int)m_Points[i - 1].y, (int)m_Points[i].x, (int)m_Points[i ].y);
	}
}
