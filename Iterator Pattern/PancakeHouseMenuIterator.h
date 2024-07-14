#pragma once
#include <list>

#include "Iterator.h"
#include "MenuItem.h"

class PancakeHouseMenuIterator : public IIterator<MenuItem>
{
public:
	PancakeHouseMenuIterator(std::list<MenuItem*>& items) : m_items(&items)
	{
		
	}
	bool hasNext() override
	{
		if (m_position < m_items->size())
			return true;

		m_position = 0;
		return false;
	}
	MenuItem next() override
	{
		std::list<MenuItem*>::iterator itr = m_items->begin();
		std::advance(itr, m_position);
		m_position++;

		return **itr;
	}

private:
	std::list<MenuItem*>* m_items;
	int m_position{ 0 };
};
