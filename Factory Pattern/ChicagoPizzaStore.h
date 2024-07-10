#pragma once
#include "ChicagoPizzaIngredientFactory.h"
#include "PizzaIngredientFactory.h"
#include "PizzaStore.h"
#include "PizzaTypes.h"

class ChicagoPizzaStore final : public PizzaStore
{
public:
	std::unique_ptr<Pizza> CreatePizza(const std::string& type) override
	{
		std::unique_ptr<Pizza> pizza{ nullptr };

		std::unique_ptr<PizzaIngredientFactory> ingredientFactory = std::make_unique<ChicagoPizzaIngredientFactory>();

		if (type == "cheese")
		{
			pizza = std::make_unique<CheesePizza>(ingredientFactory);
			pizza->SetName("Chicago Style Cheese Pizza");
		}
		else if (type == "clam")
		{
			pizza = std::make_unique<ClamPizza>(ingredientFactory);
			pizza->SetName("Chicago Style Clam Pizza");
		}

		return std::move(pizza);
	}
};
