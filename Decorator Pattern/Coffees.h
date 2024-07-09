#pragma once
#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend()
	{
		m_description = "House Blend Coffee";
	}
	double Cost() override
	{
		return 0.89;
	}
};

class DarkRoast : public Beverage
{
public:
	DarkRoast()
	{
		m_description = "Dark Roast Coffee";
	}
	double Cost() override
	{
		return 0.99;
	}
};

class Decaf : public Beverage
{
public:
	Decaf()
	{
		m_description = "Decaf Coffee";
	}
	double Cost() override
	{
		return 1.05;
	}
};

class Espresso : public Beverage
{
public:
	Espresso()
	{
		m_description = "Espresso Coffee";
	}
	double Cost() override
	{
		return 1.99;
	}
};


