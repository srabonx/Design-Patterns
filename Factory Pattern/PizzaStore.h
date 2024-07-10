#pragma once
#include "Pizza.h"

class PizzaStore
{
public:
	virtual std::unique_ptr<Pizza> CreatePizza(const std::string& type) = 0;
	virtual Pizza* OrderPizza(const std::string& type) final
	{
		std::unique_ptr<Pizza> pizza{ nullptr };

		pizza = CreatePizza(type);
		
		pizza->Prepare();
		pizza->Bake();
		pizza->Cut();
		pizza->Box();

		return pizza.release();
	}
	
};
