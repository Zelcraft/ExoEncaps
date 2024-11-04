#include "Amovable.h"
#include "Vector2.h"

Amovable::Amovable(float speed, int direction) {

	float sp = speed;
	int d = direction;

}

void Amovable::setDir(int d) {

	d = 1;

}

void Amovable::setSpeed(float sp) {

	sp = 10;

}

float Amovable::move(int d, float sp) {

	Vector2::m_x = d * sp;
	Vector2::m_y = d * sp;

}