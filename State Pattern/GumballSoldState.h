#pragma once
#include "State.h"


class GumballMachine;

class GumballSoldState : public State
{
public:
	GumballSoldState(GumballMachine* machine) : m_machine(machine)
	{
		
	}

	void DispenseGumball() override;

private:
	GumballMachine* m_machine{ nullptr };
};
