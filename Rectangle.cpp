#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	size = width * height;
}

void Rectangle::Draw()
{
	printf("Rectangle Size: %f\n", size);
}
