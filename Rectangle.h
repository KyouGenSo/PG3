#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle(int width, int height) { this->width = width; this->height = height; }
	void Size() override;
	void Draw() override;

private:
	int width;
	int height;
};
