#include <stdio.h>
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IShape* shapes[2];
	shapes[0] = new Circle(5);
	shapes[1] = new Rectangle(5, 10);

	for (int i = 0; i < 2; i++) {
		shapes[i]->Size();
		shapes[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete shapes[i];
	}

	return 0;
}