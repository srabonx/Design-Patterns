#include "SoldOutState.h"

#include "GumballMachine.h"

void SoldOutState::InsertCoin()
{
	std::cout << "You inserted a coin" << std::endl;
	m_machine->setState(MachineState::HAS_QUARTER);
}
