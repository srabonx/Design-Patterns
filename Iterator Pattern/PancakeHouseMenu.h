#pragma once
#include <list>

#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"

class PancakeHouseMenu
{
public:
	PancakeHouseMenu()
	{
		AddItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast",
			true, 2.99);

		AddItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage",
			false, 2.99);

		AddItem("Blueberry Pancakes", "Pancakes made with fresh blueberries",
			true, 3.49);

		AddItem("Waffles", "Waffles with your choice of blueberries or strawberries",
			true, 3.59);
	}

	~PancakeHouseMenu()
	{
		for(const auto& i : m_menuItems)
		{
			delete i;
		}

		m_menuItems.clear();
	}

	void AddItem(const std::string& name, const std::string& description, const bool vegetarian, const double price)
	{
		const auto menuItem = new MenuItem(name, description, vegetarian, price);
		m_menuItems.push_back(menuItem);
	}


	IIterator<MenuItem>* createIterator()
	{
		IIterator<MenuItem>* item = new PancakeHouseMenuIterator(m_menuItems);
		return item;
	}

private:
	std::list<MenuItem*> m_menuItems;
};
