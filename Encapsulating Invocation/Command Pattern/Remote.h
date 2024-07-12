#pragma once
#include <array>

#include "Command.h"
#include "Commands.h"

class Remote
{
public:
	Remote(Command& initialCommand)
	{
		for (auto& c : m_onCommands)
			c = &initialCommand;

		for (auto& c : m_offCommands)
			c = &initialCommand;

		m_lastCommand = &initialCommand;
	}
	~Remote() = default;

	void AssignDevice(int slotNum, Command& commandOn, Command& commandOff)
	{
		m_onCommands[slotNum] = &commandOn;
		m_offCommands[slotNum] = &commandOff;
	}

	void ButtonOnPressed(int slotNum)
	{
		m_onCommands[slotNum]->Execute();
		m_lastCommand = m_onCommands[slotNum];
	}
	void ButtonOffPressed(int slotNum)
	{
		m_offCommands[slotNum]->Execute();
		m_lastCommand = m_offCommands[slotNum];
	}

	void ButtonUndoPressed()
	{
		m_lastCommand->Undo();
	}

private:
	std::array<Command*, 7> m_onCommands;
	std::array<Command*, 7> m_offCommands;
	// For undo
	Command* m_lastCommand;
};
