#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	size = 3.14 * radius * radius;
}

void Circle::Draw()
{
	printf("Circle Size: %f\n", size);
}
