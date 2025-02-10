#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle(int radius) { this->radius = radius; }
	void Size() override;
	void Draw() override;

private:
	int radius;
};
