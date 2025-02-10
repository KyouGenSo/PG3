#include "Cat.h"
#include <stdio.h>
#include <iostream>

Cat::Cat(const char* name)
{
	this->name = name;
	printf("Cat %s created.\n", name);
}

Cat::~Cat()
{
	printf("Cat %s destroyed.\n", name);
}

void Cat::speak()
{
	printf("%s Says: Meow!\n", name);
}