#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(const char* name);
	~Cat() override;
	void speak() override;
};