#pragma once
#include <iostream>
#include <vector>

#include "Ingredients.h"

class Pizza
{
public:
	virtual ~Pizza() = default;

	virtual void Prepare() = 0;
	
	virtual void Bake()
	{
		std::cout << "Baking the pizza" << std::endl;
	}
	virtual void Cut()
	{
		std::cout << "Cutting the pizza" << std::endl;
	}
	virtual void Box()
	{
		std::cout << "Boxing up the pizza" << std::endl;
	}

	[[nodiscard]] virtual std::string GetName() final
	{
		return m_name;
	}

	virtual void SetName(const std::string& name)
	{
		this->m_name = name;
	}

protected:

	std::string m_name;
	Dough m_dough;
	Sauce m_sauce;
	Cheese m_cheese;
	Pepperoni m_pepperoni;
	Clams m_clam;

	std::vector<std::unique_ptr<Veggies>> m_veggies;
};
