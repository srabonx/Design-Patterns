#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class CheesePizza : public Pizza
{
public:

	CheesePizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory)
	{
		m_ingredientFactory = std::move(ingredientFactory);
	}
	void Prepare() override
	{
		std::cout << "Preparing " << m_name<<std::endl;
		m_dough = m_ingredientFactory->CreateDough();
		m_sauce = m_ingredientFactory->CreateSauce();
		m_cheese = m_ingredientFactory->CreateCheese();
	}

private:
	std::unique_ptr<PizzaIngredientFactory> m_ingredientFactory{ nullptr };
};


class ClamPizza : public Pizza
{
public:
	ClamPizza(std::unique_ptr<PizzaIngredientFactory>& ingredientFactory)
	{
		m_ingredientFactory = std::move(ingredientFactory);
	}
	void Prepare() override
	{
		std::cout << "Preparing " << m_name << std::endl;
		m_dough = m_ingredientFactory->CreateDough();
		m_sauce = m_ingredientFactory->CreateSauce();
		m_cheese = m_ingredientFactory->CreateCheese();
		m_clam = m_ingredientFactory->CreateClam();
	}

private:
	std::unique_ptr<PizzaIngredientFactory> m_ingredientFactory{ nullptr };
};