#pragma once
#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage
{
public:
	void Brew() override
	{
		std::cout << "Brewing with coffee pods" << std::endl;
	}
	void AddCondiments() override
	{
		std::cout << "Adding sugar and milk" << std::endl;
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

		std::cout << "Do you want sugar and milk with this coffee? (y/n)" << std::endl;

		std::cin >> s;

		return s;
	}
};