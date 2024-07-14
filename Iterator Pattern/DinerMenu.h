#pragma once
#include <iostream>

#include "DinerMenuIterator.h"
#include "Iterator.h"
#include "MenuItem.h"


class DinerMenu
{
public:
	DinerMenu()
	{
		m_menuItems = new MenuItem*[m_maxMenuSize]();

		AddItem("Vegetarian BLT", "Fake bacon with lettuce",
			true, 2.99);

		AddItem("BLT", "Bacon with lettuce",
			false, 2.99);

		AddItem("Soup of the day", "Hot bowl of soup",
			true, 3.49);

		AddItem("HotDog", "A hot dog",
			false, 3.59);

		AddItem("Steamed veggies with broccoli", "Delicious vegetables", true, 3.99);

	}

	~DinerMenu()
	{
		for (int i = 0; i < m_maxMenuSize; i++)
			delete m_menuItems[i];

		delete m_menuItems;
	}

	void AddItem(const std::string& name, const std::string& description, const bool vegetarian, const double price)
	{
		const auto menuItem = new MenuItem(name, description, vegetarian, price);
		if (m_currentPos < m_maxMenuSize)
		{
			m_menuItems[m_currentPos] = menuItem;
			m_currentPos++;
		}
		else
			std::cout << "No more space to hold item" << std::endl;
	}

	IIterator<MenuItem>* createIterator()
	{
		IIterator<MenuItem>* item = new DinerMenuIterator(m_menuItems);
		return item;
	}

private:
	const int m_maxMenuSize{ 5 };
	int m_currentPos{ 0 };
	MenuItem** m_menuItems{ nullptr };
};
