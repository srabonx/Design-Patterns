#include "GumballSoldState.h"

#include "GumballMachine.h"

void GumballSoldState::DispenseGumball()
{
	if (m_machine->getCount() > 0)
	{
		m_machine->ReleaseGumball();
		m_machine->setState(MachineState::NO_QUARTER);
	}
	else
	{
		std::cout << "Sorry, Out of Gumball" << std::endl;
		m_machine->setState(MachineState::SOLD_OUT);
	}
}
