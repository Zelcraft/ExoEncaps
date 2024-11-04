#pragma once
class Amovable {

public:

	float speed;
	int direction;

	Amovable(float speed, int direction);
	~Amovable();

	virtual void setDir(int d);
	virtual void setSpeed(float sp);
	virtual float move(int d, float sp);

 };