#pragma once
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"

class Waitress
{
public:

	Waitress(DinerMenu* dinerMenu, PancakeHouseMenu* pancakeHouseMenu) :
		m_dinerMenu(dinerMenu), m_pancakeHouseMenu(pancakeHouseMenu)
	{
		
	}

	~Waitress() = default;

	void PrintMenu()
	{
		IIterator<MenuItem>* pancakeIterator = m_pancakeHouseMenu->createIterator();
		IIterator<MenuItem>* dinerIterator = m_dinerMenu->createIterator();

		std::cout << "Menu\t Breakfast" << std::endl;
		PrintMenu(pancakeIterator);

		std::cout << "Menu\t Lunch" << std::endl;
		PrintMenu(dinerIterator);

		delete pancakeIterator;
		delete dinerIterator;
	}
private:

	void PrintMenu(IIterator<MenuItem>* iterator)
	{
		while(iterator->hasNext())
		{
			auto item = iterator->next();
			std::cout << item.getName() + " " << item.getPrice() << std::endl;
			std::cout << item.getDescription() << std::endl;
		}
	}

private:
	DinerMenu* m_dinerMenu{ nullptr };
	PancakeHouseMenu* m_pancakeHouseMenu{ nullptr };
};
