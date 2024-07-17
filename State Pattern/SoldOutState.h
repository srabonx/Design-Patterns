#pragma once

#include "State.h"


class GumballMachine;

class SoldOutState : public State
{
public:
	SoldOutState(GumballMachine* gumballMachine) : m_machine(gumballMachine)
	{

	}

	void InsertCoin() override;

private:
	GumballMachine* m_machine{ nullptr };
};

