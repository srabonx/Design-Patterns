#pragma once
#include <memory>

#include "NYIngredients.h"
#include "PizzaIngredientFactory.h"



class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
	
public:

	Dough CreateDough() override
	{
		ThinCrustDough dough;
		return dough;
	}
	Sauce CreateSauce() override
	{
		MarianaSauce sauce;
		return sauce;
	}
	Cheese CreateCheese() override
	{
		ReggianoCheese cheese;
		return cheese;
	}
	std::vector<Veggies> CreateVeggies() override
	{
		std::vector<Veggies> veggies;
		Garlic garlic;
		Onion onion;
		veggies.push_back(garlic);
		veggies.push_back(onion);

		return veggies;
	}

	Pepperoni CreatePepperoni() override
	{
		SlicedPepperoni pepperoni;
		return pepperoni;
	}

	Clams CreateClam() override
	{
		FreshClam clam;
		return clam;
	}
};
