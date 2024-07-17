#include "HasQuarterState.h"

#include "GumballMachine.h"

void HasQuarterState::WithdrawCoin()
{
	std::cout << "Returning you coin please wait..." << std::endl;
	m_machine->setState(MachineState::NO_QUARTER);
}

void HasQuarterState::TurnCrank()
{
	m_machine->setState(MachineState::GUMBALL_SOLD);
}
