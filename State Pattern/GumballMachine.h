#pragma once
#include <string>
#include <unordered_map>

#include "GumballSoldState.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"


class GumballMachine
{
public:
	GumballMachine(std::string location, int count) : m_count(count), m_location(std::move(location))
	{
		m_states[MachineState::SOLD_OUT] = std::make_unique<SoldOutState>(this);
		m_states[MachineState::HAS_QUARTER] = std::make_unique<HasQuarterState>(this);
		m_states[MachineState::NO_QUARTER] = std::make_unique<NoQuarterState>(this);
		m_states[MachineState::GUMBALL_SOLD] = std::make_unique<GumballSoldState>(this);


		m_currentState = MachineState::SOLD_OUT;
	}

	~GumballMachine()
	{
		
	}

	void InsertCoin()
	{
		m_states[m_currentState]->InsertCoin();
	}

	void WithdrawCoin()
	{
		m_states[m_currentState]->WithdrawCoin();
	}

	void TurnCrank()
	{
		m_states[m_currentState]->TurnCrank();
		m_states[m_currentState]->DispenseGumball();
	}

	void ReleaseGumball()
	{
		if (m_count > 0)
		{
			std::cout << "Releasing a Gumball, Please wait..." << std::endl;
			m_count--;
		}
	}

	[[nodiscard]] int getCount() const
	{
		return m_count;
	}

	void setState(const MachineState state)
	{
		m_currentState = state;
	}

	[[nodiscard]] MachineState getState() const
	{
		return m_currentState;
	}

private:

	void DispenseGumball()
	{
		ReleaseGumball();
	}


private:

	MachineState m_currentState = MachineState::SOLD_OUT;

	std::unordered_map<MachineState,std::unique_ptr<State>> m_states;

	int m_count{ 0 };
	std::string m_location;
};
