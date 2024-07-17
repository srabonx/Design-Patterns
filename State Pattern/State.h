#pragma once
#include <iostream>

#include "InvalidActionException.h"

enum class MachineState
{
	SOLD_OUT,
	HAS_QUARTER,
	NO_QUARTER,
	GUMBALL_SOLD,
	WINNER
};

class State
{
public:
	virtual ~State() = default;

	virtual void InsertCoin()
	{
		throw InvalidActionException();
	}

	virtual void WithdrawCoin()
	{
		throw InvalidActionException();
	}

	virtual void TurnCrank()
	{
		throw InvalidActionException();
	}

	virtual void DispenseGumball()
	{
		throw InvalidActionException();
	}
};
