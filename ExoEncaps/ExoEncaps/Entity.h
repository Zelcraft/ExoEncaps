#pragma once

class Entity {

public:

	Entity(float m_x, float m_y);
	~Entity();

	virtual float getPos();
	virtual void setPos(float x, float y);

};