#pragma once
#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
	[[nodiscard]] std::string GetDescription() const = 0;

	[[nodiscard]] Size GetSize() const
	{
		return m_beverage->GetSize();
	}

protected:
	std::shared_ptr<Beverage> m_beverage;
};