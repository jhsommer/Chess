#include "Poligon.h"



Poligon::Poligon(const std::vector<CVector2>& _points, const float& _color) {
	m_Points = _points;
	m_Color = _color;
}

void Poligon::Update()
{
	
}

void Poligon::RenderLine(SDL_Renderer& _ren) const
{
	for (int i = 0; i < m_Points.size(); i++) {
		SDL_RenderDrawLine(&_ren, (int)m_Points[i - 1].x, (int)m_Points[i - 1].y, (int)m_Points[i].x, (int)m_Points[i ].y);
	}
}

void Poligon::RenderArea(SDL_Renderer* _ren) const
{

	std::vector<SDL_Vertex> VertexPoints;
	for (int i = 0; i < m_Points.size(); i++) {
		SDL_Vertex vertex = { {m_Points[i].x,m_Points[i].y},{m_Color},{1,1}};
		VertexPoints.assign(i,vertex);
	}
	std::vector<int> indexList;
	for (int i = 0; i < m_Points.size(); i++) {
		if (i%3) {
			i = i - 1;
		}
		indexList.assign(indexList.size(), i);
	}
	SDL_RenderGeometry(_ren, NULL ,VertexPoints.data(), (int)VertexPoints.size(), NULL, 0);
}