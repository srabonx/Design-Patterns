#pragma once
#include "Ingredients.h"

class ThickCrustDough : public Dough
{
public:
	ThickCrustDough()
	{
		m_name = "Thick Crust Dough";
		std::cout << "Making " << m_name << std::endl;
	}
};

class PlumTomatoSauce : public Sauce
{
public:
	PlumTomatoSauce()
	{
		m_name = "Plum Tomato Sauce";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class MozzarellaCheese : public Cheese
{
public:
	MozzarellaCheese()
	{
		m_name = "Mozzarella Cheese";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class BlackOlive : public Veggies
{
public:
	BlackOlive()
	{
		m_name = "Black Olive";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class Spinach : public Veggies
{
public:
	Spinach()
	{
		m_name = "Spinach";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class FrozenClam : public Clams
{
public:
	FrozenClam()
	{
		m_name = "Frozen Clams";
		std::cout << "Adding " << m_name << std::endl;
	}
};