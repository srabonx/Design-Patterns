#pragma once
#include <iostream>

#include "Duck.h"

class MallardDuck : public Duck
{
public:
	MallardDuck() = default;

	void Quack() override
	{
		std::cout << "Quack Quack" << std::endl;
	}

	void Fly() override
	{
		std::cout << "I can flyy" << std::endl;
	}
};
