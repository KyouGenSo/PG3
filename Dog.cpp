#include "Dog.h"
#include <stdio.h>

Dog::Dog(const char* name)
{
	this->name = name;
	printf("Dog %s created.\n", name);
}

Dog::~Dog()
{
	printf("Dog %s destroyed.\n", name);
}

void Dog::speak()
{
	printf("%s Says: Woof!\n", name);
}