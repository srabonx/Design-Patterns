#pragma once
#include "Duck.h"
#include "Turkey.h"


class TurkeyAdapter : public Duck
{
public:
	TurkeyAdapter(Turkey* turkey)
	{
		m_turkey = turkey;
	}

	virtual ~TurkeyAdapter()
	{
	}
	void Quack() override
	{
		m_turkey->Gobble();
	}
	void Fly() override
	{
		for (int i = 0; i < 5; i++)
			m_turkey->ShortFly();
	}

private:
	Turkey* m_turkey{ nullptr };
};
