#pragma once

class Animal
{
public:
	Animal();
	virtual ~Animal();
	virtual void speak();

protected:
	const char* name;
};