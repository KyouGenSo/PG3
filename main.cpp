#include <stdio.h>
#include <iostream>
#include "Dog.h"
#include "Cat.h"

int main() {

	const char* name1 = "Rover";
	const char* name2 = "Whiskers";


	Animal* dog = new Dog(name1);
	Animal* cat = new Cat(name2);

	dog->speak();
	cat->speak();

	delete dog;
	delete cat;

	return 0;
}