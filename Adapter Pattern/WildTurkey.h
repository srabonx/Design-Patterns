#pragma once
#include <iostream>

#include "Turkey.h"

class WildTurkey : public Turkey
{
public:

	WildTurkey() = default;

	~WildTurkey() = default;

	void Gobble() override
	{
		std::cout << "Gobble Gobble" << std::endl;
	}
	void ShortFly() override
	{
		std::cout << "I can fly for a short time" << std::endl;
	}

};