#pragma once
#include "NYPizzaIngredientFactory.h"
#include "PizzaIngredientFactory.h"
#include "PizzaStore.h"
#include "PizzaTypes.h"

class NYPizzaStore final : public PizzaStore
{
public:
	std::unique_ptr<Pizza> CreatePizza(const std::string& type) override
	{
		std::unique_ptr<Pizza> pizza{ nullptr };

		std::unique_ptr<PizzaIngredientFactory> nyIngredientFactory = std::make_unique<NYPizzaIngredientFactory>();

		if(type == "cheese")
		{
			pizza = std::make_unique<CheesePizza>(nyIngredientFactory);
			pizza->SetName("NY Style Cheese Pizza");
		}
		else if (type == "clam")
		{
			pizza = std::make_unique<ClamPizza>(nyIngredientFactory);
			pizza->SetName("NY Style Clam Pizza");
		}

		return std::move(pizza);
	}
};
