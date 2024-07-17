#pragma once
#include "State.h"

class GumballMachine;

class NoQuarterState : public State
{
public:

	NoQuarterState(GumballMachine* machine) : m_machine(machine)
	{
		
	}

	void InsertCoin() override;

private:
	GumballMachine* m_machine{ nullptr };
};
