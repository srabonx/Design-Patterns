#pragma once
#include "Iterator.h"
#include "MenuItem.h"

class DinerMenuIterator : public IIterator<MenuItem>
{
public:
	DinerMenuIterator(MenuItem** items) : m_items(items)
	{
		m_length = 5;
	}

	~DinerMenuIterator() = default;

	bool hasNext() override
	{
		if (m_position >= m_length || m_items[m_position] == nullptr)
			return false;

		return true;
	}

	MenuItem next() override
	{
		auto item = m_items[m_position];
		m_position++;
		return *item;
	}

private:
	MenuItem** m_items;
	int m_position{ 0 };
	int m_length{ 0 };
};
