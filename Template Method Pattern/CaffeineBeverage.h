#pragma once
#include <iostream>

class CaffeineBeverage
{
public:

	// Actual template method
	virtual void Prepare() final
	{
		Boil();
		Brew();
		Pour();

		if (CustomerWantsCondiments())
			AddCondiments();
	}

	void Boil()
	{
		std::cout << "Boiling the water" << std::endl;
	}

	virtual void Brew() = 0;

	void Pour()
	{
		std::cout << "Pouring into the cup" << std::endl;
	}

	virtual void AddCondiments() = 0;

	// Hook method
	virtual bool CustomerWantsCondiments()
	{
		return false;
	}

};
