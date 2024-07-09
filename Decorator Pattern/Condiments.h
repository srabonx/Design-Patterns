#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(const std::shared_ptr<Beverage>& beverage)
	{
		this->m_beverage = beverage;
	}

	double Cost() override
	{
		return m_beverage->Cost() + .20;
	}

	[[nodiscard]] std::string GetDescription() const override
	{
		return m_beverage->GetDescription() + ", Mocha";
	}
};

class Soy : public CondimentDecorator
{
public:
	Soy(const std::shared_ptr<Beverage>& beverage)
	{
		this->m_beverage = beverage;
	}

	double Cost() override
	{
		double cost = m_beverage->Cost();
		if (m_beverage->GetSize() == Size::TALL)
			cost += .10;
		else if(m_beverage->GetSize() == Size::GRANDE)
			cost += .15;
		else if(m_beverage->GetSize() == Size::VENTI)
			cost += + .20;

		return cost;
	}

	[[nodiscard]] std::string GetDescription() const override
	{
		return m_beverage->GetDescription() + ", Soy";
	}
};

class Whip : public CondimentDecorator
{
public:
	Whip(const std::shared_ptr<Beverage>& beverage)
	{
		this->m_beverage = beverage;
	}

	double Cost() override
	{
		return m_beverage->Cost() + .10;
	}

	[[nodiscard]] std::string GetDescription() const override
	{
		return m_beverage->GetDescription() + ", Whip";
	}
};

class SteamedMilk : public CondimentDecorator
{
public:
	SteamedMilk(const std::shared_ptr<Beverage>& beverage)
	{
		this->m_beverage = beverage;
	}
	double Cost() override
	{
		return m_beverage->Cost() + .10;
	}

	[[nodiscard]] std::string GetDescription() const override
	{
		return m_beverage->GetDescription() + ", Steamed Milk";
	}
};

