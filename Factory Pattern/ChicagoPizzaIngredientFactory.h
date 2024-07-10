#pragma once
#include "ChicagoIngredient.h"
#include "NYIngredients.h"
#include "PizzaIngredientFactory.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	Dough CreateDough() override
	{
		ThickCrustDough dough;
		return dough;
	}
	Sauce CreateSauce() override
	{
		PlumTomatoSauce sauce;
		return sauce;
	}
	Cheese CreateCheese() override
	{
		MozzarellaCheese cheese;
		return cheese;
	}
	std::vector<Veggies> CreateVeggies() override
	{
		std::vector<Veggies> veggies;
		BlackOlive olive;
		Spinach spinach;
		veggies.push_back(olive);
		veggies.push_back(spinach);

		return veggies;
	}
	Pepperoni CreatePepperoni() override
	{
		SlicedPepperoni pepperoni;
		return pepperoni;
	}
	Clams CreateClam() override
	{
		FrozenClam clam;
		return clam;
	}
};
