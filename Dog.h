#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(const char* name);
	~Dog() override;
	void speak() override;
};