#pragma once
#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage
{
public:
	void Brew() override
	{
		std::cout << "Brewing with tea leaves" << std::endl;
	}
	void AddCondiments() override
	{
		std::cout << "Adding Lemon" << std::endl;
	}
	bool CustomerWantsCondiments() override
	{
		std::string input = GetInput();

		if (input[0] == 'y')
			return true;

		return false;
	}

private:

	std::string GetInput() const
	{
		std::string s;

		std::cout << "Do you want Lemon with this tea? (y/n)" << std::endl;

		std::cin >> s;

		return s;
	}
};
