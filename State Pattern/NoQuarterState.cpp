#include "NoQuarterState.h"

#include "GumballMachine.h"

void NoQuarterState::InsertCoin()
{
	std::cout << "You inserted a coin" << std::endl;
	m_machine->setState(MachineState::HAS_QUARTER);
}
