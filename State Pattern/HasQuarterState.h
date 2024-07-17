#pragma once
#include "State.h"

class GumballMachine;

class HasQuarterState : public State
{
public:

	HasQuarterState(GumballMachine* machine) : m_machine(machine)
	{
		
	}

	void WithdrawCoin() override;

	void TurnCrank() override;

private:
	GumballMachine* m_machine{ nullptr };
};
