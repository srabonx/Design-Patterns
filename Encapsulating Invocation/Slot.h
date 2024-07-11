#pragma once
#include <list>

#include "Device.h"

class Slot
{
public:
	void PressOn()
	{
		for(auto& d : m_devices)
		{
			d->DeviceOn();
		}
	}
	void PressOff()
	{
		for (auto& d : m_devices)
		{
			d->DeviceOff();
		}
	}

	void AddDevice(Device* device)
	{
		m_devices.push_back(device);
	}

	void RemoveDevice(Device* device)
	{
		m_devices.erase(std::remove(m_devices.begin(), m_devices.end(), device), m_devices.end());
	}

	void RemoveDevice()
	{
		m_devices.erase(m_devices.begin(), m_devices.end());
		m_devices.clear();
	}
	

private:
	std::vector<Device*> m_devices;
};
