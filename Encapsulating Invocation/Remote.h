#pragma once
#include <list>
#include <vector>

#include "Device.h"
#include "Slot.h"

class Remote
{
public:

	Remote()
	{
		m_slots.resize(7);
	}

	void AssignDevice(int slotNum, std::vector<Device*>& devices)
	{
		for (auto& device : devices)
		{
			m_slots[slotNum].AddDevice(device);
		}
	}

	void AssignDevice(int slotNum, Device* device)
	{
		m_slots[slotNum].AddDevice(device);
	}

	void RemoveDevice(int slotNum)
	{
		m_slots[slotNum].RemoveDevice();
	}

	void PressOn(int slotNum)
	{
		m_slots[slotNum].PressOn();
	}

	void PressOff(int slotNum)
	{
		m_slots[slotNum].PressOff();
	}

	void PressUndo()
	{
		
	}


private:
	std::vector<Slot> m_slots;
};
