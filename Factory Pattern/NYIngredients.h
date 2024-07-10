#pragma once
#include "Ingredients.h"

class ThinCrustDough : public Dough
{
public:
	ThinCrustDough()
	{
		m_name = "Thin Crust Dough";
		std::cout << "Making " << m_name << std::endl;
	}
};

class MarianaSauce : public Sauce
{
public:
	MarianaSauce()
	{
		m_name = "Mariana Sauce";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class ReggianoCheese : public Cheese
{
public:
	ReggianoCheese()
	{
		m_name = "Reggiano Cheese";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class Garlic : public Veggies
{
public:
	Garlic()
	{
		m_name = "Garlic";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class Onion : public Veggies
{
public:
	Onion()
	{
		m_name = "Onion";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class SlicedPepperoni : public Pepperoni
{
public:
	SlicedPepperoni()
	{
		m_name = "Sliced Pepperoni";
		std::cout << "Adding " << m_name << std::endl;
	}
};

class FreshClam : public Clams
{
public:
	FreshClam()
	{
		m_name = "Fresh Clams";
		std::cout << "Adding " << m_name << std::endl;
	}
};