#pragma once
#include <vector>

class Dough;
class Sauce;
class Cheese;
class Veggies;
class Pepperoni;
class Clams;


class PizzaIngredientFactory
{
public:
	virtual Dough CreateDough() = 0;
	virtual Sauce CreateSauce() = 0;
	virtual Cheese CreateCheese() = 0;
	virtual std::vector<Veggies> CreateVeggies() = 0;
	virtual Pepperoni CreatePepperoni() = 0;
	virtual Clams CreateClam() = 0;
};
