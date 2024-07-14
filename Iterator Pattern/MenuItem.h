#pragma once
#include <string>

class MenuItem
{
public:

	MenuItem(std::string name, std::string description,const bool vegetarian,const double price) :
	m_name(std::move(name)),m_description(std::move(description)),m_vegetarian(vegetarian),m_price(price)
	{}

	[[nodiscard]] std::string getName() const
	{
		return m_name;
	}

	[[nodiscard]] std::string getDescription() const
	{
		return m_description;
	}

	[[nodiscard]] bool isVegetarian() const
	{
		return m_vegetarian;
	}

	[[nodiscard]] double getPrice() const
	{
		return m_price;
	}


private:
	std::string m_name;
	std::string m_description;
	bool	m_vegetarian{ false };
	double m_price{ 0.0f };
};
