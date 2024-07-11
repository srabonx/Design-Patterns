#pragma once
#include <iostream>

#include "Device.h"

class CeilingLight : public Device
{
public:

	CeilingLight()
	{
		
	}

	virtual ~CeilingLight() = default;

	void DeviceOn() override
	{
		this->On();
	}
	void DeviceOff() override
	{
		this->Off();
	}

	void On()
	{
		std::cout << "Ceiling light on" << std::endl;
	}

	void Off()
	{
		std::cout << "Ceiling light off" << std::endl;
	}

	void Dim()
	{
		
	}

};

class TV : public Device
{
public:

	TV() = default;
	virtual ~TV() = default;

	void DeviceOn() override
	{
		this->On();
	}
	void DeviceOff() override
	{
		this->Off();
	}

	void On()
	{
		std::cout << "Tv on" << std::endl;
	}

	void Off()
	{
		std::cout << "Tv off" << std::endl;
	}

	void setInputChannel()
	{
		
	}

	void setVolume()
	{
		
	}
};
